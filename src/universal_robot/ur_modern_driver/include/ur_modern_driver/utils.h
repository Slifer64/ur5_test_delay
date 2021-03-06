#ifndef UR_ROBOT_UNITS_H
#define UR_ROBOT_UNITS_H

#include <mutex>
#include <thread>
#include <chrono>
#include <iostream>
#include <vector>
#include <functional>
#include <condition_variable>

#include <ros/ros.h>
#include <sensor_msgs/JointState.h>

namespace ur_
{

class Semaphore
{
private:
  std::mutex mutex_;
  std::condition_variable condition_;
  // unsigned long count_ = 0; // Initialized as locked.
  bool count_ = false;  // Initialized as locked.

public:
  void notify()
  {
    std::lock_guard<decltype(mutex_)> lock(mutex_);
    // ++count_;
    count_ = true;
    condition_.notify_one();
  }

  void wait()
  {
    std::unique_lock<decltype(mutex_)> lock(mutex_);
    while(!count_) // Handle spurious wake-ups.
      condition_.wait(lock);
    // --count_;
    count_ = false;
  }

  bool try_wait()
  {
    std::lock_guard<decltype(mutex_)> lock(mutex_);
    if(count_)
    {
      // --count_;
      count_ = false;
      return true;
    }
    return false;
  }
};


class Timer
{
public:
  Timer()
  {
    clock_gettime(CLOCK_REALTIME, &beg_);
  }

  long int elapsedNanoSec()
  {
    clock_gettime(CLOCK_REALTIME, &end_);
    return (end_.tv_sec - beg_.tv_sec)*1000000000 + (end_.tv_nsec - beg_.tv_nsec);
  }

  double elapsedMicroSec()
  {
    return elapsedNanoSec()/1000.0;
  }

  double elapsedMilliSec()
  {
    return elapsedNanoSec()/1000000.0;
  }

  double elapsedSec()
  {
    return elapsedNanoSec()/1000000000.0;
  }

  void start() { clock_gettime(CLOCK_REALTIME, &beg_); }

private:
  timespec beg_, end_;
};


class JointStatePublisher
{
public:
  JointStatePublisher();

  ~JointStatePublisher();

  void start();

  void stop();

  void addFun(void (*fun)(sensor_msgs::JointState &));

  template<class T>
  void addFun(void (T::*fun)(sensor_msgs::JointState &), T *obj_ptr)
  {
    std::unique_lock<std::mutex> lck(mtx);
    add_joint_state_funs.push_back( std::bind(fun, obj_ptr, std::placeholders::_1) );
  }

  void setPublishCycle(double Ts);
  void setPublishTopic(const std::string &pub_topic);

private:

  void publishLoop();

  bool run;

  ros::NodeHandle nh;
  ros::Publisher joint_state_pub;

  std::string pub_topic;
  unsigned long Ts; // in nanosec

  std::thread run_thread;
  std::mutex mtx;

  std::vector<std::function<void(sensor_msgs::JointState &)>> add_joint_state_funs;

};


std::string setThreadPriorErrMsg(int error_code);
int setThreadPriority(std::thread &thr, int policy, int priority);
int makeThreadRT(std::thread &thr);
std::string setThreadPriorErrMsg(int error_code);
void PRINT_INFO_MSG(const std::string &msg, std::ostream &out = std::cout);
void PRINT_CONFIRM_MSG(const std::string &msg, std::ostream &out = std::cout);
void PRINT_WARNING_MSG(const std::string &msg, std::ostream &out = std::cerr);
void PRINT_ERROR_MSG(const std::string &msg, std::ostream &out = std::cerr);

} // namespace ur_

#endif // UR_ROBOT_UNITS_H

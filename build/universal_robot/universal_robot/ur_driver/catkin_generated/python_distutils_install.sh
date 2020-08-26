#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ur-pc/slifer/ur_test/src/universal_robot/universal_robot/ur_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ur-pc/slifer/ur_test/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ur-pc/slifer/ur_test/install/lib/python2.7/dist-packages:/home/ur-pc/slifer/ur_test/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ur-pc/slifer/ur_test/build" \
    "/usr/bin/python2" \
    "/home/ur-pc/slifer/ur_test/src/universal_robot/universal_robot/ur_driver/setup.py" \
    build --build-base "/home/ur-pc/slifer/ur_test/build/universal_robot/universal_robot/ur_driver" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/ur-pc/slifer/ur_test/install" --install-scripts="/home/ur-pc/slifer/ur_test/install/bin"
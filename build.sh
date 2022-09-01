rm -rf build
mkdir build && cd build && cmake .. && make && make install
scp remote 28.10.10.60:~/codebase/build
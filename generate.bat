del /s /q build
mkdir build
cd build
cmake ..  ^
    -DCMAKE_SYSTEM_NAME=WindowsStore ^
    -DCMAKE_SYSTEM_VERSION=10.0 ^
    -Thost=x64 
cd ..
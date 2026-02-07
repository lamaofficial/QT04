1) $env:PATH = "D:\Qt\Tools\mingw1310_64\bin;" + $env:PATH
2) cmake -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH="D:\Qt\6.10.2\mingw_64" ..
3) cmake --build .

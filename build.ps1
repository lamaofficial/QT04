cd build
Remove-Item * -Recurse -Force
$env:PATH = "D:\Qt\Tools\mingw1310_64\bin;" + $env:PATH
cmake -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH="D:\Qt\6.10.2\mingw_64" ..
cmake --build . --config Release
cd bin
D:\Qt\6.10.2\mingw_64\bin\windeployqt.exe QT04_mingw.exe

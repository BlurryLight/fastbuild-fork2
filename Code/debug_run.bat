@REM 执行 debug exe

set cur_folder=%~dp0
set tmp_folder=%cur_folder%\..\tmp
set output_type=x64-Debug
set output_folder=%tmp_folder%\%output_type%\bin

start %output_folder%\FBuildCoordinator.exe
start %output_folder%\FBuildWorker.exe -console -coordinator=192.168.137.69 -cpus=2
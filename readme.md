# Cpp module 06
This repository contains my answsers to the seventh module of a series of excercises based on the C++ language. The standard used in these excercises is C++98. If you are a fellow student at 42 do not copy anything from this repository that you do not understand, use it to learn instead.

### Compilation
In order to compile these excercises you will need a C++ compiler (I recommend g++ or clang++) and to have make installed. Execute the following command to compile whichever excercise that you want:
```bash
cd ex"nº of folder"/ && make
```

Each makefile also has rules for cleaning the object files:
```bash
make clean
```
You can also delete the object files and the executable with this command:
```bash
make fclean
```
If you want to re-compile everything, you do it like this:
```bash
make re
```
Lastly, if you want to compile with debug information just use:
```bash
make debug
```

This excercises have only been tested on Linux, but they should be able to compile in MacOS too. I cannot guarantee sucess in the case of Windows though.
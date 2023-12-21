# WallpaperManager
A C++ wallpaper manager for Windows.

## Compilation
Compilation has been tested using g++ on Windows 11.
To compile, run the following command:
```
g++ main.cpp -o main
```

## Execution
The program will accept an image path as the first argument, or the path specified in a file named "config" in this directory.
### Via arguments
To run the program via arguments, run the following command:
```
main.exe "C:\Photos\background.png"
```
### Via config file
To run the program by config file, create a file named "config" in this directory. Or you could copy the "config.example" file and enter the path to your background image.
Then run the following command:
```
main.exe
```
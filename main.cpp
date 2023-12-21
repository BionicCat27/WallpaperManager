#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    printf("Received %d arguments\n", argc);
    char *path = argv[1];
    printf("Received path: %s\n", path);
    int result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, path, SPIF_UPDATEINIFILE);
    if (result)
    {
        printf("Wallpaper set\n");
    }
    else
    {
        printf("Wallpaper not set\n");
    }
}
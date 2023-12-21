#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    string path;
    if (argc == 2)
    {
        cout << "Received " << argc << " arguments" << endl;
        path = argv[1];
    }
    else
    {
        cout << "No path argument found." << endl;
        cout << "Loading config file" << endl;
        ifstream ConfigFile("config");
        if (!ConfigFile)
        {
            cerr << "ERROR: Expected a file named \"config\" in this directory." << endl;
            return -1;
        }
        string line;
        getline(ConfigFile, path);
    }
    cout << "Received path: " << path << endl;
    char *cpath = path.data();
    int result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, cpath, SPIF_UPDATEINIFILE);

    if (result)
    {
        cout << "Wallpaper set" << endl;
    }
    else
    {
        cout << "Wallpaper not set" << endl;
    }
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void appendFile()
{

    ofstream fout("data.txt", ios::app);

    if (!fout.is_open())
    {
        cout << "Error: opening file in ios::app mode is not working";
        return;
    }

    fout << "Appended content using ios::app";
    fout.close();
}

int main()
{
    appendFile();
    return 0;
}
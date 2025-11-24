#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ios:ion---> used to read from a existing file:

void readFile()
{
    ifstream fin("data.txt", ios::in);
    if (!fin.is_open())
    {
        cout << "Error opening the file with ios::in mode is not possible";
        return;
    }
    cout << "Reading file content is successfull" << endl;
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}

int main()
{
    readFile();
    return 0;
}
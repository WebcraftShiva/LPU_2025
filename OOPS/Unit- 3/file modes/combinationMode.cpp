// read + write: combination mode:

#include <iostream>
#include <fstream>
using namespace std;

void readWriteBoth()
{

    fstream file("combo.txt", ios::in | ios::out);

    if (!file.is_open())
    {
        cout << "Error while having combination of read and write" << endl;

        // create:
        ofstream temp("combo.txt");
        temp.close();

        // again open file for read and write:
        file.open("combo.txt", ios::in | ios::out);
    }
    cout << "writing  file: combo.txt -- using ios::in | ios::out" << endl;
    
    file.seekg(0);

        string line;
        cout << "Reading from the file: combo.txt -- using ios::in | ios::out" << endl;

        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }

int main()
{

    readWriteBoth();
    return 0;
}
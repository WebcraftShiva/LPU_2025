#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ios:out---> used for wrtiting to the file.
// deletes old content if there is any already.

void writOut()
{
    ofstream fout("data.txt", ios::out);

    if (!fout.is_open())
    {
        cout << "Error opening file using ios::out";
        return;
    }
    fout << "This is the new content in the file";
    fout << "This file is using ios::out";

    fout.close();
}

int main()
{

    writOut();
    return 0;
}
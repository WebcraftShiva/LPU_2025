// ios:trunc:  delete old content that is already being present in our file.

#include <iostream>
#include <fstream>
using namespace std;

void truncateFile()
{

    ofstream fout("data.txt", ios::trunc);

    fout << "File is truncated using ios::trunc\n";

    fout.close();

    cout << "old file is being truncated";
}

int main()
{

    truncateFile();
    return 0;
}
// In sequenctial access we read and write file in order from start to end, ex-- just the way we read anything from a book

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ifstream fin("sample.txt");

    if (!fin)
    {
        cout << "File not found";

        return 0;
    }
    string line;

    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return 0;
}

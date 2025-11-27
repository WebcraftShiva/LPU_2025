#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // create sample file: data.txt:
    ofstream fout("data.txt");
    fout << "Hey there!!";
    fout.close();

    // opening file again for reading it:
    ifstream fin("data.txt");

    if (!fin)
    {
        cout << "File not found";
        return 0;
    }

    // file--> beginning
    fin.seekg(0);
    cout << "Pointer at: " << fin.tellg() << endl;

    fin.seekg(4);
    cout << "Pointer at: " << fin.tellg() << endl;

    char ch;
    fin.get(ch);

    cout << "Charater at this position 4 is:" << ch << endl;

    fin.close();

    return 0;
}
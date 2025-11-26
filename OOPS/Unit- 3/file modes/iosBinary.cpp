// ios::binary: used for binary files like audio, images: .exe etc:

#include <iostream>
#include <fstream>
using namespace std;

void writeBinary()
{

    int number = 1234;
    float price = 45.67;

    ofstream fout("binary.dat", ios::binary);

    if (!fout.is_open())
    {
        cout << "Error: ios:binary is not opening \n";
        return;
    }
    fout.write((char *)&number, sizeof(number));
    fout.write((char *)&price, sizeof(price));
}

void readBinary()
{
    int number;
    float price;

    ifstream fin("binary.dat", ios::binary | ios::in);

    if (!fin.is_open())
    {
        cout << "Error: ios:binary is not opening \n";
        return;
    }
    fin.read((char *)&number, sizeof(number));
    fin.read((char *)&price, sizeof(price));

    cout << "Binary read is done:\n";
    cout << "Number: " << number << endl;
    cout << "Price: " << price << endl;
}

int main()
{
    writeBinary();
    readBinary();

    return 0;
}

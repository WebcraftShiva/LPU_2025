#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    // input function:
    void input()
    {
        cout << "Enter the roll number: ";
        cin >> roll;
        cin.ignore(); // clearning buffer
        cout << "Enter the name: ";
        cin.getline(name, 20);
    }

    // display :
    void display()
    {
        cout << "Roll Number is:" << roll << endl;
        cout << "Your Name is:" << name << endl;
    }
};

int main()
{

    Student s;

    ofstream fout("student.dat", ios::binary | ios::out);

    if (!fout)
    {
        cout << "File not found" << endl;
        return 1;
    }

    s.input();
    fout.write((char *)&s, sizeof(s));
    fout.close();

    cout << "Writting on file with object is successfull \n";

    // reading from the file using object:
    ifstream fin("student.dat", ios::binary | ios::in);

    if (!fin)
    {
        cout << "Error in opening the file" << endl;
        return 1;
    }

    Student s2; // object that help us to read data:

    fin.read((char *)&s2, sizeof(s2));

    fin.close();

    cout << "data after performing read on file is :" << endl;

    s2.display();

    return 0;
}

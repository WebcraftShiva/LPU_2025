#include<iostream>
using namespace std;

class Student{
    public:
    Student(){}   //constructor
    ~Student(){} // destructor
};

int main(){

    Student s;  // constructor calle automatically

    // destructor: s get out of the scope it will destroy it. 
    return 0;
}

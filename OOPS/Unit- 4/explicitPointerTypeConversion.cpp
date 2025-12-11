#include<iostream>
using namespace std;

int main(){

    int number = 56;
    void* void_ptr=&number; // implicit conversion to void*

    // Explicit conversion back to int pointer:
    int* int_ptr = static_cast<int*>(void_ptr);

    cout<<"Value through int pointer: "<< *int_ptr<<endl;


    // converting int pointer to char pointer:
    char* char_ptr = reinterpret_cast<char*>(&number);
    cout<<"First byte of my char is: "<<*char_ptr<<endl;

    


    return 0;
}
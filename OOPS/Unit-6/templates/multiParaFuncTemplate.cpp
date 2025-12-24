#include <iostream>
using namespace std;

// function template with two different types
template <class T1,class T2>

void show(T1 a, T2 b){
    cout<<"First: "<<a<<endl;
    cout<<"Second: "<<b<<endl;
}


int main(){
    show(10,"Hello");
    return 0;
}
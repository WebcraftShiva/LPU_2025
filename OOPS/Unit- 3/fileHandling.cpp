#include<iostream>
#include<fstream>  // inorder to handle file handling
#include<string> 
using namespace std;

void writeFile(){

    // 1.declare the output file stream object 
    ofstream fout;

    const string fileName = "data.txt";


    // open file:
    fout.open(fileName); // if file exisit, previous content get erased (default behaviour)

    //checking weather the file has been opened or not
    if(fout.is_open()){
        cout<<"Writing content to"<<fileName<<endl;

        // writing data to the file:
        fout<<"Hello this side shiva";
        fout<<"How's ur day";
        fout<<"Already 12:53 PM";

        // close the file:
        fout.close();
        cout<<"File"<<fileName<<"Successfully closed"<<endl;
    }
    else{
        cout<<"File couldn't opened"<<endl;
    }
}

int main(){
    writeFile();
    return 0;
}
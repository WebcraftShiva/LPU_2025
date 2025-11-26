// ios:ate---> opens file and initially set pointer at the end.

#include <iostream>
#include <fstream>
using namespace std;

void openAtEnd()
{
    fstream file("data.txt", ios::ate | ios::in);

    if (!file.is_open())
    {
        cout << "Error: ios:Ate is not opening \n";
        return;
    }

    // tellg(): it gives file pointer position
    int length = file.tellg();
    cout << "ios:ate  is opening file  pointer at end  and file size is:" << length << "bytes\n";
    file.close();
}

int main()
{
    openAtEnd();
    return 0;
}
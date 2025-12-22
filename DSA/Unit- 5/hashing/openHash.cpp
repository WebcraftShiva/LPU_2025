#include <iostream>
#include <list>
using namespace std;

class HashTable
{

private:
    int size;
    list<int> *table;

public:
    // constructorL
    HashTable(int s)
    {
        size = s;
        table = new list<int>[size];
    }

    // Hash function:
    int HashFunction(int key)
    {
        return key % size;
    }

    // inserting key:
    void insert(int key)
    {
        int index = HashFunction(key);
        table[index].push_back(key);
    }

    // display hash table:
    void display()
    {

        for (int i = 0; i < size; i++)
        {
            cout << "Index " << i << ":";

            for (int x : table[i])
            {
                cout << x << "->";
            }
            cout << "NULL" << endl;
        }
    }
    ~HashTable()
    {
        delete[] table;
    }
};

int main()
{

    HashTable h(10);
    h.insert(10);
    h.insert(15);
    h.insert(7);
    h.insert(23);
    h.insert(5);
    h.display();
    return 0;
}
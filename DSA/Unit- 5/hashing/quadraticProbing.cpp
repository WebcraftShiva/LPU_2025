#include <stdio.h>
#define size 10

int table[size];

void init()
{
    for (int i = 0; i < size; i++)
        table[i] = -1;
}

int hashFunction(int key)
{
    return key % size;
}

void insert(int key)
{
    int index = hashFunction(key);
    int i = 1;
    while (table[index] != -1)
    {
        index = (hashFunction(key) + i * i) % size;
        i++;
    }
    table[index] = key;
}

void display()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d: %d\n", i, table[i]);
    }
}

int main()
{
    init();
    insert(10);
    insert(20);
    insert(30);
    insert(25);
    display();

    return 0;
}
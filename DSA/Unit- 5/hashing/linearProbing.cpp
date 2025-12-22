#include <stdio.h>
#define SIZE 10

int table[SIZE];

void init()
{
    for (int i = 0; i < SIZE; i++)
        table[i] = -1;
}

int hashFunction(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int index = hashFunction(key);
    while (table[index] != -1)
    {
        index = (index + 1) % SIZE;
    }
    table[index] = key;
}

void display()
{
    for (int i = 0; i < SIZE; i++)
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
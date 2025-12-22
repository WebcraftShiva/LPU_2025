#include <stdio.h>
#define size 10

int table[size];

void init()
{
    for (int i = 0; i < size; i++)
        table[i] = -1;
}

int hash1(int key)
{
    return key % size;
}

int hash2(int key)
{
    return size - (key % size);
}

void insert(int key)
{
    int index = hash1(key);
    int i = 0;
    while (table[index] != -1)
    {
        index = (hash1(key) + i * hash2(key)) % size;
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
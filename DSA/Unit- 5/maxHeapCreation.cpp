#include <iostream>
#include <vector>
using namespace std;

class MaxHeap
{
private:
    vector<int> arr;
    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

public:
    MaxHeap() {}
    void maxHeapify(int i)
    {
        int left = leftChild(i);
        int right = rightChild(i);
        int largest = i;
        if (left < (int)arr.size() && arr[left] > arr[largest])
            largest = left;
        if (right < (int)arr.size() && arr[right] > arr[largest])
            largest = right;
        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            maxHeapify(largest);
        }
    }

    // Build Max Heap:
    void buildMaxHeap(vector<int> &input)
    {
        arr = input;
        // Heapify from last non-leaf node
        for (int i = static_cast<int>(arr.size()) / 2 - 1; i >= 0; --i)
            maxHeapify(i);
    }
    void printHeap()
    {
        cout << "[";
        for (int i = 0; i < (int)arr.size(); i++)
        {
            cout << arr[i];
            if (i < (int)arr.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
    int size() { return arr.size(); }
    vector<int> &getArray() { return arr; }
};

int main()
{
    vector<int> input = {3, 1, 6, 5, 2, 4};
    MaxHeap heap;
    heap.buildMaxHeap(input);
    cout << "Built max-heap: ";
    heap.printHeap();
    return 0;
}
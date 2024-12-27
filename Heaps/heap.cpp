#include <iostream>
using namespace std;

class Heap
{
public:
    int *arr;
    int capacity;
    int size;

    Heap(int capacity)
    {
        this->arr = new int[capacity + 1]; // Allocate extra space for 1-based indexing
        this->capacity = capacity;
        this->size = 0;
    }

    void insert(int val)
    {
        if (size == capacity)
        {
            cout << "Overflow" << endl;
            return;
        }

        size++;           // Increase the size
        int index = size; // Start with the last index
        arr[index] = val; // Insert the new value

        // Heapify up: Move the element up to its correct position
        while (index > 1)
        {
            int parentindex = index / 2;       // Find the parent index
            if (arr[parentindex] < arr[index]) // Max heap condition
            {
                swap(arr[parentindex], arr[index]); // Swap if the parent is smaller than the current element
                index = parentindex;                // Update index to the parent's index
            }
            else
            {
                break; // If the heap property is satisfied, stop
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++) // Loop through the heap and print each element
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h(100);
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print(); // Print the heap

    return 0;
}

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

    int deletefromheap()
    {
        if (size == 0)
        {
            cout << "Underflow" << endl;
            return -1; // Return an error value when the heap is empty
        }

        // Save the root value
        int root = arr[1];

        // Move the last element to the root
        arr[1] = arr[size];
        size--; // Reduce the heap size

        // Heapify down: Restore the max-heap property
        int index = 1;
        while (index <= size)
        {
            int largestindex = index;
            int leftindex = 2 * index;
            int rightindex = 2 * index + 1;

            // Find the largest among the current node, left child, and right child
            if (leftindex <= size && arr[leftindex] > arr[largestindex])
            {
                largestindex = leftindex;
            }

            if (rightindex <= size && arr[rightindex] > arr[largestindex])
            {
                largestindex = rightindex;
            }

            // If the largest value is already at the current node, break
            if (largestindex == index)
            {
                break;
            }

            // Swap the current node with the largest child
            swap(arr[index], arr[largestindex]);
            index = largestindex; // Move to the next level
        }

        // Return the value of the deleted root
        return root;
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

    int value = h.deletefromheap();
    cout << "Deleted value: " << value << endl;
    h.print();

    return 0;
}

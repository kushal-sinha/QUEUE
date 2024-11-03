#include <iostream>
using namespace std;

class Queue
{
public:
    int Queue[10];
    int start = 0, end = -1; // Initialize start to 0 and end to -1
    int size = 0;            // Keeps track of the number of elements in the queue

    // Push an element into the queue
    void push(int x)
    {
        if (size == 10)
        {
            cout << "Cannot Push: Queue is Full" << endl;
            return;
        }
        end = (end + 1) % 10; // Increment end in a circular manner
        Queue[end] = x;       // Insert the element at the new end position
        size++;               // Increase the size of the queue
    }

    // Pop an element from the queue
    int pop()
    {
        if (size == 0)
        {
            cout << "Cannot Pop: Queue is Empty" << endl;
            return -1; // Return -1 or any invalid value to indicate empty queue
        }
        int el = Queue[start];    // Get the element at the start
        start = (start + 1) % 10; // Move start in a circular manner
        size--;                   // Decrease the size of the queue
        return el;                // Return the popped element
    }

    // Get the element at the end of the queue
    int top()
    {
        if (size == 0)
        {
            cout << "No element: Queue is Empty" << endl;
            return -1;
        }
        return Queue[end];
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Top element: " << q.top() << endl;           // Should print 3
    cout << "Popped element: " << q.pop() << endl;        // Should print 1
    cout << "Top element after pop: " << q.top() << endl; // Should print 3
    return 0;
}

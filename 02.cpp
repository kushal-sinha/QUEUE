#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    // Insert condition
    void push(int val)
    {
        if (rear == size - 1 && front == 0)
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val; // Insert after incrementing rear
        }
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
            arr[front] = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void print()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "front" << front << endl;
            cout << "rear" << rear << endl;
            cout << endl;
        }
    }
};

int main()
{
    Queue q(5);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(7);

    cout << "Queue after pushing elements: ";
    q.print();

    q.pop();
    cout << "Queue after popping an element: ";
    q.print();
    q.push(9);
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.print();

    return 0;
}

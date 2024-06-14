#include <iostream>
#define n 10
using namespace std;

class Queue
{
private:
    int *arr;
    int rear;
    int front;

public:
    Queue()
    {
        arr = new int[n];
        rear = front = -1;
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    bool isFull() {
        return rear == n - 1;
    }

    void Enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue Overflow! Cannot Enqueue More" << endl;
        }
        else
        {
            if (isEmpty())
            {
                front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << "Value " << value << " enqueued" << endl;
        }
    }

    void Dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Cannot Dequeue More" << endl;
        }
        else
        {
            cout << "Value " << arr[front] << " dequeued" << endl;
            front++;
            if (front > rear)
            {
                front = rear = -1; // Reset the queue
            }
        }
    }

    void showFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front of Queue is: " << arr[front] << endl;
        }
    }

    void showRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Rear of Queue is: " << arr[rear] << endl;
        }
    }
};

int main()
{
    Queue q;
    q.Dequeue(); // Test dequeuing from an empty queue
    q.Enqueue(10);
    q.Enqueue(20);
    q.showFront(); // Should display 10
    q.showRear(); // Should display 20
    q.Dequeue(); // Should dequeue 10
    q.showFront(); // Should display 20
    q.Dequeue(); // Should dequeue 20
    q.Dequeue(); // Test dequeuing from an empty queue

    for (int i = 0; i < n; ++i) {
        q.Enqueue(i + 1);
    }
    q.Enqueue(11);  

    return 0;
}

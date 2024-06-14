#include <iostream>
using namespace std;
#define n 10
class Stack
{
private:
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow!!" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
            cout << "value: " << val << " pushed :)" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
        }
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Stack Is Empty" << endl;
        }
        else
        cout << "Top of Array is : " << arr[top];
    }
};

int main()
{

    Stack S;
    S.peek();
    S.push(21);
    S.push(1);
    S.push(46);
    S.push(27);
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.peek();
    
    return 0;   
}
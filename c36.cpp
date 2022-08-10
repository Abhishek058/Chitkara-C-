#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int peak;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        peak = -1;
    }

    void push(int ele)
    {
        if (size - peak > 1)
        {
            peak++;
            arr[peak] = ele;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (peak >= 0)
        {
            peak--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    void top()
    {
        if (peak >= 0)
        {
            cout << arr[peak] << endl;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    void empty()
    {
        if (peak == -1)
        {
            cout << "Empty" << endl;
        }
        else
        {
            cout << "Not Empty" << endl;
        }
    }
};

int main()
{
    Stack s(5);

    s.push(99);
    s.push(98);
    s.push(97);
    s.push(96);
    s.push(95);
    s.top();
    s.push(94);
    s.pop();
    s.empty();
    s.top();
    s.pop();
    s.pop();
    s.top();
    s.pop();
    s.pop();
    s.empty();
    s.top();
    s.pop();
    return 0;
}
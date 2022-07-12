#include <iostream>
using namespace std;

class Array
{
    int n, arr[100], pos, ele;

public:
    void getAry()
    {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter Elements of array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void printAry()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void insertAtPos()
    {
        cout << "Enter Index :";
        cin >> pos;
        if (pos >= n)
        {
            cout << "Index not found" << endl;
            printAry();
        }
        else
        {
            cout << "Enter Element :";
            cin >> ele;
            for (int i = n; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[pos] = ele;
            n = n + 1;
            cout << "New Array: ";
            printAry();
        }
    }
    void deleteAtPos()
    {
        cout << "Enter Index: ";
        cin >> pos;
        if (pos >= n)
        {
            cout << "Index not found" << endl;
            printAry();
        }
        else
        {
            for (int i = pos; i < n; i++)
            {
                arr[i] = arr[i + 1];
            }
            n = n - 1;
            cout << "New Array: ";
            printAry();
        }
    }
};
int main()
{
    // int arr[100] = {12, 34, 45, 23, 76};
    Array a;
    a.getAry();
    a.insertAtPos();
    a.deleteAtPos();
    return 0;
}
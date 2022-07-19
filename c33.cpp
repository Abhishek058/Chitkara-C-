#include <iostream>
using namespace std;
class Array
{
    int n;

public:
    void insertbeg(int arr[], int n, int x);
    void insertpos(int arr[], int n, int x, int pos);
    void delpos(int arr[], int n, int pos);
    void displayarr(int arr[], int n);
    void delval(int arr[], int n, int x);
};

void Array::displayarr(int arr[], int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
}
void Array::insertbeg(int arr[], int x, int n)
{
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    };
    arr[0] = x;
    n = n + 1;
}

void Array::insertpos(int arr[], int n, int x, int pos)
{
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    };
    arr[pos] = x;
    n = n + 1;
};

void Array::delpos(int arr[], int n, int pos)
{
    for (int i = pos; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
};

void Array::delval(int arr[], int n, int x)
{
    int pos;
    cin >> pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            pos = i;
        }
    }
    delpos(arr, n, pos);
}

int main()
{
    Array a1;
    int n, ele, index;
    int arr[100];
    cout << "enter size of array ";
    cin >> n;
    cout << "Enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter your choice " << endl;
    cout << "1.Insertion at specified index " << endl;
    cout << "2.Insert element at beginning. " << endl;
    cout << "3.Delete an element by index. " << endl;
    cout << "4.Display elements of a given array. " << endl;
    cout << "5.Delete an element by value. " << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter the element to be inserted ";
        cin >> ele;
        cout << "Enter the position you want it to be inserted in: ";
        cin >> index;
        a1.insertpos(arr, n, ele, index);
        a1.displayarr(arr, n);
        break;
    }

    case 2:
    {
        cout << "Enter the element to be inserted ";
        cin >> ele;
        a1.insertbeg(arr, n, ele);
        a1.displayarr(arr, n);
        break;
    }

    case 3:
    {
        cout << "Enter the index at which you want to delete";
        cin >> index;
        a1.delpos(arr, n, index);
        a1.displayarr(arr, n);
        break;
    }

    case 4:
    {
        a1.displayarr(arr, n);
    }
    }
}
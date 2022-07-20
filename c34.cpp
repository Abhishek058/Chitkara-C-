#include <iostream>
using namespace std;

class Sort
{
    int arr[100], n;

public:
    void PrintArray(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void InsertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;
            for (; j >= 0; j--)
            {
                if (arr[j] > key)
                {
                    arr[j + 1] = arr[j];
                }
                else
                {
                    break;
                }
            }
            arr[j + 1] = key;
        }
        PrintArray(arr, n);
    }

    void SelectionSort(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
        PrintArray(arr, n);
    }
};

int main()
{
    int arr[5] = {20, 12, 10, 15, 2};
    Sort s1;
    int choice;
    cout << "Select Choice: " << endl;
    cout << "1. Insertion Sort" << endl
         << "2. Selection Sort" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        s1.InsertionSort(arr, 5);
        break;
    case 2:
        s1.SelectionSort(arr, 5);
        break;
    }
    return 0;
}
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
    void merge(int arr[], int l, int mid, int r)
    {
        int n1 = mid - l + 1;
        int n2 = r - mid;

        int a[n1];
        int b[n2]; // temperory array
        for (int i = 0; i < n1; i++)
        {
            a[i] = arr[l + i];
        }
        for (int i = 0; i < n2; i++)
        {
            b[i] = arr[mid + 1 + i];
        }

        int i = 0;
        int j = 0;
        int k = l;
        while (i < n1 && j < n2)
        {
            if (a[i] < b[j])
            {
                arr[k] = a[i];
                k++;
                i++;
            }
            else
            {
                arr[k] = b[j];
                k++;
                j++;
            }
        }
        while (i < n1)
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        while (j < n2)
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    void mergesort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int mid = (l + r) / 2;
            mergesort(arr, l, mid);
            mergesort(arr, mid + 1, r);

            merge(arr, l, mid, r);
        }
    }
};

int main()
{
    int arr[5] = {20, 12, 10, 15, 2};
    Sort s1;
    int choice;
    cout << "Select Choice: " << endl;
    cout << "1. Insertion Sort" << endl
         << "2. Selection Sort" << endl
         << "3. Merge Sort" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        s1.InsertionSort(arr, 5);
        break;
    case 2:
        s1.SelectionSort(arr, 5);
        break;
    case 3:
        s1.mergesort(arr, 0, 5);
        s1.PrintArray(arr, 5);
        break;
    }

    return 0;
}
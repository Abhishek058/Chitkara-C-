#include <iostream>
using namespace std;

void Count(int arr[], int n)
{
    int pCount = 0, nCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pCount++;
        }
        if (arr[i] < 0)
        {
            nCount++;
        }
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }
    cout << pCount << endl;
    cout << nCount << endl;
    cout << oddCount << endl;
    cout << evenCount << endl;
    cout << zeroCount << endl;
}
int main()
{
    int n;
    int arr[100];
    cout << "Enter number of elements you want to enter: ";
    cin >> n;
    cout << "Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Count(arr, n);
    return 0;
}
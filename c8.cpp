#include<iostream>
using namespace std;

int main()
{
    int n, d;
    cin>>n;
    int arr[n];
    int result = 1;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        result *= arr[i];
    }
    cin>>d;
    cout<<result%d;
}
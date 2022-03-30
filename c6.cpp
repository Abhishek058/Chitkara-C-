#include<iostream>
using namespace std;

//call by reference
// void swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// call by pointer
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a, b;
    cin>>a>>b;
    // swap(a, b);
    cout<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<a<<" "<<b;

    return 0;
}
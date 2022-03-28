#include<iostream>
using namespace std;

int main()
{
    // int i = 1;
    // while(i <= 5){
    //     int j = 1;
    //     while(j <= 10){
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Standard Template Library
    vector<int> v1;
    cout<<v1.size()<<endl;
    vector<int> v2 = {1, 2, 3 , 4, 5, 6};
    cout<<v2.size()<<endl;
    vector<int> v3(5, 11);
    cout<<v3.size()<<endl;

    return 0;
}
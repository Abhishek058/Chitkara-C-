#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    try{
        if(b == 0){
            throw b;
        }
        else{
            cout<<a/b;
        }
    }
    catch(int b){
        cout<<"Can't be zero"<<endl;
    }
    catch(...){
        cout<<"Default"<<endl;
    }
    return 0;
}
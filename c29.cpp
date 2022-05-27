#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Standard Template Library
    vector<int> v1;
    cout << v1.size() << endl;

    vector<int> v2 = {1, 2, 3, 4, 5, 6};
    cout << v2.size() << endl;

    vector<int> v3(5, 11);

    cout << v3.size() << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    cout << v2[4] << endl;

    v1.push_back(20);
    v1.push_back(5);
    v1.push_back(89);
    v1.push_back(9);

    for (int i = 0; i < 4; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}
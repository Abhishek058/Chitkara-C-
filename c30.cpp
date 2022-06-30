// #include <iostream>
// using namespace std;

// class Emp
// {
// public:
//     string emp[5];
//     int id[5];
//     int sal[5];

//     void getData()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cin >> emp[i];
//             cin >> id[i];
//             cin >> sal[i];
//         }
//     }
// };

// class Salary : public Emp
// {
// public:
//     int totalSal = 0;
//     void totSal()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             totalSal += sal[i];
//         }
//         cout << "Total Salary: " << totalSal << endl;
//     }
// };

// class GetSal : public Salary
// {
// };

// int main()
// {
//     GetSal e1;
//     e1.getData();
//     e1.totSal();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int factorial(int a)
// {
//     int f = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int fact1 = factorial(n);
//     cout << "The factorial of the given number is:" << fact1 << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] == x)
//         {
//             cout << " Number found at index:"
//                  << " " << j << endl;
//             break;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cin >> a;
//     switch (a)
//     {
//     case 1:
//         cout << "Sunday";
//         break;
//     case 2:
//         cout << "Monday";
//         break;
//     case 3:
//         cout << "Tuesday";
//         break;
//     case 4:
//         cout << "Wednesday";
//         break;
//     case 5:
//         cout << "Thursday";
//         break;
//     case 6:
//         cout << "Friday";
//         break;
//     case 7:
//         cout << "Saturday";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool prime_number(int n)
// {

//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << prime_number(n);
//     return 0;
// }

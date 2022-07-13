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

// #include <iostream>
// using namespace std;

// int SimpIst(int p, int r = 6.5, int t = 5)
// {
//     return p * r * t / 100;
// }

// int main()
// {
//     cout << SimpIst(12000) << endl;
//     cout << SimpIst(12000, 3) << endl;
//     cout << SimpIst(12000, 3, 10) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "Even Number" << endl;
//     }
//     else
//     {
//         cout << "Odd Number" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Student
// {
//     string stud[5];
//     int roll[5];
//     int marks[5];
//     float perct[5];

// public:
//     void setdata()
//     {
//         cout << "Enter the name, roll number, marks of 5 students: " << endl;
//         for (int i = 0; i < 5; i++)
//         {
//             cin >> stud[i];
//             cin >> roll[i];
//             cin >> marks[i];
//         }
//     }

//     void perc()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             perct[i] = marks[i] / 5;
//         }
//     }
//     void find_topper()
//     {
//         float max = 0;
//         int index = 0;
//         for (int i = 0; i < 5; i++)
//         {
//             if (perct[i] > max)
//             {
//                 max = perct[i];
//                 index = i;
//             }
//         }
//         cout << "Topper is: " << stud[index] << " with percentage: " << max << endl;
//     }
//     void showdata()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << "Details of " << i << " student: ";
//             cout << stud[i] << " " << roll[i] << " " << marks[i] << " " << perct[i] << endl;
//         }
//     }
// };

// int main()
// {
//     Student s1;
//     s1.setdata();
//     s1.perc();
//     s1.showdata();
//     s1.find_topper();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void insertAtBegin(int arr[], int ele, int n)
// {
//     int ans[n + 1];
//     ans[0] = ele;

//     // insertion at begining
//     for (int i = 0; i < n; i++)
//     {
//         ans[i + 1] = arr[i];
//     }
//     printArray(ans, n + 1);
// }

// void insertAtPos(int arr[], int ele, int n, int pos)
// {
//     int ans[n + 1];
//     // insertion at begining
//     for (int i = 0; i < pos; i++)
//     {
//         ans[i] = arr[i];
//     }
//     for (int i = pos; i < n; i++)
//     {
//         ans[i + 1] = arr[i];
//     }
//     ans[pos] = ele;
//     printArray(ans, n + 1);
// }

// int main()
// {
//     int n, ele, indx;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     printArray(arr, n);
//     // insertion at begin
//     //  insertAtBegin(arr, 6, n);

//     // insertion at any index
//     insertAtPos(arr, 6, n, 3);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int key, int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;

//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (arr[mid] < key)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[7] = {12, 13, 21, 23, 34, 45, 76};
//     cout << binarySearch(arr, 45, 7);
//     return 0;
// }
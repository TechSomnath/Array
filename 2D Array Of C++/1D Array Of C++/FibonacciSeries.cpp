// write a program to make Fibonacci using  array.
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the size of array:";
    cin >> n;
    int a[n];
    cout << "Enter the element of array:";
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        cout << "Fibonacci Saeries=" << " " << a[i]<<endl;;
    }

    return 0;
}

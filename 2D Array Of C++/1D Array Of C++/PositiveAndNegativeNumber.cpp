// write a program to find positive and negative numbers using array.
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the size of array:";
    cin >> n;
    int a[n];
    cout << "Enter the element of array:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << a[i] << " is a positive number" << endl;
        }
        else if (a[i] < 0)
        {
            cout << a[i] << " is a negative number" << endl;
        }
        else
        {
            cout << a[i] << " is a zero" << endl;
        }
    }
    return 0;
}

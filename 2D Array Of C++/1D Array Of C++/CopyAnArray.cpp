// write a program to copy an array and store it another array.
#include <iostream>
using namespace std;
int main()
{
    int n, i, array1[100], array2[100];
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
        array2[i] = array1[i];
    }
    cout << "Array2=";
    for (i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}

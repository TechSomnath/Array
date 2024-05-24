// write a program to find the maximum numbers using array.
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
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "The maximum number in array=" << max;
    ;
    return 0;
}

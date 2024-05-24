// write a program to find the reverse array.
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
    for (i = n; i >= 0; i--)
    {
        cout << "array element =" << " " << a[i]<<endl;
    }
    return 0;
}

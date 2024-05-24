// write a program to calculate the sum of N numbers using array.
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
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
        sum = sum + a[i];
    }
    cout << "The sum of" << " " << n <<" "<< " numbers =" << sum;
    return 0;
}

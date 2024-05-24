// write a program to find sum of upper and lower triangles elements .
#include <iostream>
using namespace std;
int main()
{
    int A[3][4], i, j, uppersum = 0, lowersum = 0;
    cout << "Enter element for A matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "A [" << i << "][" << j << "]:";
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << "A Matrix=" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            cout << " " << A[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
            {
                uppersum = uppersum + A[i][j];
            }
            else if (j < i)
            {
                lowersum = lowersum + A[i][j];
            }
        }
    }
    cout << endl
         << "sum of upper triangular element =" << uppersum << endl;
    cout << endl
         << "sum of lower triangular element =" << lowersum << endl;
    return 0;
}
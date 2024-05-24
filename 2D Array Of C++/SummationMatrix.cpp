// write a program to summation of two  matrix.
#include <iostream>
using namespace std;
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j;
    cout << "Enter element for A matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "A [" << i << "][" << j << "]:";
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << "A Matrix=" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            cout << " " << A[i][j];
        }
        cout << endl;
    }
    cout << "Enter element for B matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "B [" << i << "][" << j << "]:";
            cin >> B[i][j];
        }
        cout << endl;
    }
    cout << "B Matrix=" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            cout << " " << B[i][j];
        }
        cout << endl;
    }
    cout << endl
         << endl
         << "Summation of two matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            cout << " " << C[i][j];
        }
        cout << endl;
    }

    return 0;
}
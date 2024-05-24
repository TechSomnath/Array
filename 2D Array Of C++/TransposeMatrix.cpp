// write a program to find the trandpose  matrix.
#include <iostream>
using namespace std;
int main()
{
    int A[3][3], transpose[3][3], i, j;
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
    cout << "Enter element for Transpose matrix" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = A[i][j];
        }
        cout << endl;
    }
    cout << " Transpose Matrix=" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            cout << " " << transpose[i][j];
        }
        cout << endl;
    }

    return 0;
}
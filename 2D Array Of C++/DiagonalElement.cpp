// write a program to find sum of main diagonal element of a  matrix.
#include <iostream>
using namespace std;
int main()
{
    int A[3][3], i, j, sum = 0;
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
    cout << endl
         << "Diagonal element" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i = j)
                cout << "A [" << i << "][" << j << "]:"<<endl;
            sum = sum + A[i][j];
        }
        cout << endl
             << "sum of diagonal element=" << sum;
    }

    return 0;
}
// write a program to print a 2D array or a matrix.
#include <iostream>
using namespace std;
int main()
{
    int A[10][10], row, col, i, j;
    cout << "Enter the number of row:";
    cin >> row;
    cout << "Enter the number of col:";
    cin >> col;
    cout << "Enter element for the matrix"<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "A [" << i << "][" << j << "]:";
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << "A Matrix="<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            cout <<" "<<A[i][j];
        }
        cout << endl;
    }
    return 0;
}
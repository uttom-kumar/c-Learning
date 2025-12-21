#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int row, col, maxN,i,j;

    cout << "Enter value of 2D array row and col: ";
    cin >> row >> col;
    int arr[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cout << "Enter value for index [" << i << "]"<<"["<<j<<"] = ";
            cin >> arr[i][j];
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    getch();
}

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, n, maxN, maxIndex;
    cout << "Enter array length : ";
    cin >> n;
    int arr[n];

    for(i=0; i<n; i++){
        cout << "Enter value for index [" << i << "] = ";
        cin >> arr[i];
    }

    maxN = arr[0];
    maxIndex = 0;

    cout << "\nFind the maximum number in Array :\n";
    for(i = 0; i < n; i++)
    {
        if(arr[i] > maxN){
            maxN = arr[i];
            maxIndex = i;
        }
    }
    cout << "\nMaximum value [" <<maxIndex << "] = " << maxN;
    getch();
}

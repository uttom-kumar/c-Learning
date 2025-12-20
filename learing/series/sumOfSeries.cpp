#include <iostream>
#include <conio.h>

using namespace std;
// series: 0 + 1 + 2 + 3 + .... + nth term
int main()
{
    int i,n, sum=0;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=0; i<=n; i++){
        sum = sum +i;
    }

    cout << "Summation of series = " << sum;
    getch();
}

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, n,temp, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    for(i = 0; temp != 0; i++){
        rem = temp %10;
        sum = sum + rem;
        temp = temp / 10;
    }
    cout << "Sum of digits of " << n << " is: " << sum << endl;
    getch();
}
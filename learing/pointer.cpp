#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int *a = new int;

    cout << "Enter a number: ";
    cin >> *a;

    cout << "Value = " << *a << endl;
    cout << "Pointer Address = " << a << endl;
}

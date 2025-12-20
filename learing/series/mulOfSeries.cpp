#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int i, n, mult = 1;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (i = 1; i<=n; i++){
        mult = mult * i;
    }

    cout << "The multiplication of series is: " << mult << endl;
    getch();
}
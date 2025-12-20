#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int i, n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i=1; i<=n; i++){
        sum = sum + (i*i);
    }
    cout << "The sum of the series is: " << sum << endl;
    getch();
}
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int years;

    while(1){
        cout << "Enter Years : ";
        cin >> years;

        if((years%4 == 0 && years%100 != 0)|| (years%400 == 0)){
            cout <<years << " is a leap years."<<endl;
        }
        else{
            cout << years << " is not a leap years."<<endl;
        }
    }
    getch();
}

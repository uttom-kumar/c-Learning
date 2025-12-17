#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1>num2 || num1 > num3){
        cout << "Num1 is the Largest Number : " << num1;
    }
    else if(num2>num1 || num2>num3){
        cout << "Num2 is the Largest Number : " << num2;
    }
    else{
        cout << "Num3 is the Largest Number : " << num3;
    }

    getch();
}

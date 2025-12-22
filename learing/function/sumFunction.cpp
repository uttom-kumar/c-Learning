#include <iostream>
#include <conio.h>

using namespace std;

void sumFunc(int a, int b){
    int sum;

    sum = a + b;
    cout << "Summation = " << sum << endl;
}

int main(){
    int num1, num2;
    cout << "Enter the value of 2 number : ";
    cin >> num1 >> num2;

    sumFunc(num1, num2);

    getch();
}

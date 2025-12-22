#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main(){
    int n, i, randomNum;

    while(1){
        cout << "type any 3 number 1 to 6 : ";
        cin >> n;
        randomNum = rand()%7;


        if(n == randomNum){
            cout << "You have won!" << endl;
        }
        else{
            cout << "You have loss!" << endl;
        }
    }

    getch();

}

#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

int strLen(string s){
    int len=0,i;

    for(i=0; i<s[i] != '\0'; i++){
        len++;
    }
    return len;
}

int main() {
    string text;
    int result ;

    cout << "type ...";
    getline(cin, text);

    // string length without library
    result = strLen(text);

    cout << "string length = " << result <<endl;

}

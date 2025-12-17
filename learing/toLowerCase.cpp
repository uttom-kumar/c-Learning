#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;

// convert all letters to lowercase and count vowels and consonants

int main()
{
    int len=0, i, vowel=0, consonant=0;
    char text[10000], ch;

    cout << "type sentence :";
    cin.getline(text,10000);




    for(i = 0; text[i] != '\0'; i++) {
        text[i] = tolower(text[i]);
        len++;
    }

    for(i=0; text[i] != '\0'; i++){
        if(text[i]>='a' && text[i] <= 'z'){
            if(text[i]=='a' || text[i]== 'e' || text[i]== 'i' || text[i]== 'o' || text[i]== 'u'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
    }

    cout << "Vowel = " << vowel <<endl << "Consonant = " << consonant;

    getch();
}

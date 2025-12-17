#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char name[1000];
    int len=0, i, vowel=0, consonant=0, num=0;

    cin.getline(name,1000);

    for(i=0; i<name[i]!='\0'; i++)
    {
        len ++;
    }

    for(i=0; i<len; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z' ||
           name[i] >= 'A' && name[i] <='Z')
        {
            if(name[i]=='a'|| name[i]=='e' || name[i] == 'i' ||
               name[i]=='o' || name[i]=='u' || name[i]== 'A' ||
               name[i]=='E' || name[i]=='I' || name[i] == 'O' ||
               name[i] == 'U')
               {
                   vowel++;
               }
            else{
                consonant++;
            }
        }
    }

    cout<< "Vowel Count = " << vowel << endl
    << "Consonant Count = " << consonant << endl;

    getch();
}

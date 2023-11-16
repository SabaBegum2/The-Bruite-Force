/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main()

{

    string word;

    word = "Wkh qljkw lv orqj dqg zh doo suhwhqg wr vohhs";

    string cipher;

    for(int shift=1;shift<=26;shift++)

    {

        cipher ="";
        cout << shift << ") ";

        for(size_t i=0;i<word.size();i++)
        {
        int char_to_number;
            if( isupper(word[i]) )
            {
                cipher += char(int(word[i]+shift-65)%26 +65);
            }
            else if( islower(word[i]) )
            {
                cipher += char(int(word[i]+shift-97)%26 +97);
            }
            else
            {
                cipher += word[i];
            }

        }
    cout << cipher << endl;

    }

}
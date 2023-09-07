#include<iostream>
using namespace std;

int main () 
{
    cout<<"Kindly enter a letter below of this line: \n";

    char c;
    char isLowercaseVowel, isUppercaseVowel;

    cin>>c;

    isLowercaseVowel == (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    isUppercaseVowel == (c== 'A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(isLowercaseVowel || isUppercaseVowel)
    {
        cout<<c<<" is a Vowel\n";
    }
    else
    {
        cout<<c<<" is a consonant\n";
    }
    return 0;
}
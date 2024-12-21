
// Q.4
#include<iostream>
using namespace std ;
void checkVowel(char ch){
    ch = tolower(ch);
    if(ch=='a'||ch=='e'|| ch=='i'|| ch=='u' || ch=='o'){
        cout << ch << "is a vowel " << endl;
    }else if(ch >='a '  && ch<='z'){
        cout << ch << " it is consonant" << endl;
    }else {
        cout << ch << "is not alphabet " << endl;
    }
}
int main (){
    char ch;
    cout << "Enter a charcter: ";
    cin >> ch;
    checkVowel( ch);
}

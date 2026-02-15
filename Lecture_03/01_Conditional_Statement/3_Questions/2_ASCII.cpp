/*
ASCII NUMBER :- 1. American Standard Code of Information Interchange.
                2. Each character is mapped, meaning each character has a Number.
                
                          char ----> Number

There are Two Types of Character and ASCII Number :-
    1. Small Character(Lowercase):- [a-z] --> (97-122)
    2. Capital Character(Uppercase):- [A-Z] --> (65-90)
*/

//2. Find character Lowercase and Uppercase With the Help of ASCII Number.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a Number : ";
    cin>>ch;

    if(ch>=65 && ch<=90) {
        cout<<"Uppercase\n";
    }
    else {
        cout<<"Lowercase";
    }
    return 0;
}
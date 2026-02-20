/*
2. reverse character, num=4.
    A A A A
      B B B
        C C
          D
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    char ch='A';  // start from 'A'

    for(int i=0; i<num; i++) {
        for(int j=0; j<i; j++) {  // print staring spaces
            cout<<" ";
        }
        for(int j=0; j<num-i; j++) {  // print characters
            cout<<ch;  
        }
        cout<<endl;
        ch++;        // move to next character after each row
    }
    return 0;
}
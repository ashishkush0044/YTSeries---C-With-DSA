/*
5. Easy with characters, n=4
    A
    A B
    A B C
    A B C D
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    
    for(int i=0; i<num; i++) {
        char ch='A';
        for(int j=0; j<i+1; j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
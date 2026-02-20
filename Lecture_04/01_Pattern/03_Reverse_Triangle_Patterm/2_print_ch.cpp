/*
2. with character, n=4
    A
    B A
    C B A
    D C B A
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=0; i<num; i++) {
        for(int j=i; j>=0; j--) {
            char ch='A'+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
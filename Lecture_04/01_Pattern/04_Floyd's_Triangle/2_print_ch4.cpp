/*
2. with characters, N=4.
    A
    B C
    D E F
    G H I J    
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter a Number : ";
    cin>>N;

    char ch='A';

    for(int i=0; i<N; i++) {
        for(int j=0; j<=i; j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
/*
1. Easy with numbers. n=4.
    here, n= number of lines(column)
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter a Number : ";
    cin>>N;

    for(int i=1; i<=N; i++) {       // 1,2,3,4
        for(int j=1; j<=N; j++) {    // 1,2,3,4
            cout<<j<<" ";            // 1 2 3 4 
        }
        cout<<endl;
    }
    return 0;
}
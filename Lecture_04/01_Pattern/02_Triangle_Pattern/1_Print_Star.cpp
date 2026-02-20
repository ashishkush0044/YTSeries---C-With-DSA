/*
1. Easy with stars, num=4
    *
    * *
    * * *
    * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=0; i<num; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
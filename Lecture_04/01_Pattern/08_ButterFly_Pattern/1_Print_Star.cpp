/*
1. print butterfly pattern star, num=4.
 
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *

*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    //Top
    // OuterLoop
    for(int i=0; i<num; i++) {
        //left star
        for(int j=0; j<i+1; j++) {
            cout<<"*";
        }
            //middle space
        for(int j=0; j<2*(num-i)-2; j++) {
            cout<<" ";
        }
        //right star
        for(int j=0; j<i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    //Bottom
    //outer loop
    for(int i=0; i<num; i++) {
        //left star
        for(int j=0; j<num-i; j++) {
            cout<<"*";
        }
        //middle space
        for(int j=0; j<i*2; j++) {
            cout<<" ";
        }
        //right space
        for(int j=0; j<num-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
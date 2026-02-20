/*
1. Reverse Numbers. num=4
    1 1 1 1
      2 2 2
        3 3
          4
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=0; i<num; i++) {
        for(int j=0; j<i; j++) {      // print staring spaces
            cout<<" ";
        }
        for(int j=0; j<num-i; j++) {   // print numbers
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}
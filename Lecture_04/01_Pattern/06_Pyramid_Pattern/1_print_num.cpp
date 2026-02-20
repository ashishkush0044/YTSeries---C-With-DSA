/*
with numbers, num=4.
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/ 

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    //outer loop
    for(int i=0; i<num; i++) {
        //spaces
        for(int j=0; j<num-i-1; j++) {
            cout<<" ";
        }
        // left side triangle
        for(int j=1; j<=i+1; j++) {
            cout<<j;
        }
        //right side triangle(Backword loop)
        for(int j=i; j>0; j--) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
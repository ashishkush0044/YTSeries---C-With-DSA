/*
With numbers, num=4.
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    //Top part
    for(int i=0; i<num; i++) {
        // starting space
        for(int j=0; j<num-i-1; j++) {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0) {
            // middle space
            for(int j=0; j<2*i-1; j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    // Bottom part
    for(int i=0; i<num-1; i++){  // 0 to num-2(Last line mai single star print karane ke liye).
        //starting space
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=num-2) {       // 0 to num-2(Last line mai single star print karane ke liye).
            //middle spaces
            for(int j=0; j<2*(num-i)-5; j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
2. print :- 
         * * * *
         * * * *
         * * * *
         * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=1; i<=num; i++) {      // how much lines(column) --> 1,2,3,4
        for(int j=1; j<=num; j++) {    // how much row --> 1,2,3,4
            cout<<"* "; 
        }
        cout<<endl;
    }
    return 0;
}
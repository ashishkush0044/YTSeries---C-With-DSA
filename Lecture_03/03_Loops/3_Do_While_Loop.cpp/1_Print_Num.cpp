/*
1. print numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int num=10, i=1;

    do {
        cout<<i<<" ";      // firstly done work and
        i++;             
    } while(i<=num);     //after condition check
    cout<<endl;

    return 0;
}
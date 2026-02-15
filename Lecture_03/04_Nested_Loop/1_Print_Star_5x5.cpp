/*
1. print  *****
          *****
          *****
          *****
          *****
*/

#include <iostream>
using namespace std;

int main() {
    int num=5;

    for(int i=1; i<=num; i++) {
        int x=5;
        for(int j=1; j<=x; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
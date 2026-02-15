/*
4. Sum of all Even numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int num=10, evenSum=0;

    for(int i=1;i<=num;i++) {
        if(i%2==0) {
            evenSum+=i;
        }
    }
    cout<<"Sum of Even Number : "<<evenSum<<endl;

    return 0;
}
/*
4. Sum of all Even numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int num=1, evenSum=0;

    while(num<=10) {
        if(num%2==0) {
            evenSum+=num;
        }
        num++;
    }
    cout<<"Sum of all even number : "<<evenSum<<endl;

    return 0;
}
/*
1. WAF to check if a number prime or Not.
*/

#include <iostream>
using namespace std;

int isPrime(int num) {
    int count=0;
    for(int i=1;i<=num;i++) {
        if(num%i==0) {       // non prime
            count++;
        }
    }
    if(count==2) {
        cout<<num<<" a Prime Number.";
    }
    else {
        cout<<num<<" Not a Prime Number.";
    }
    cout<<endl;
}
int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    isPrime(num);
    cout<<endl;

    return 0;
}
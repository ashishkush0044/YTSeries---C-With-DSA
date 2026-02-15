/*
1. check if a number is prime or not using factorial.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    
    bool isPrime=true;

    for(int i=2;i*i<=num;i++){
        if(num%i==0) {       // non prime
            isPrime =false;
            break;
        }
    }
    if(isPrime==true){
        cout<<num<<" : is Prime Number.";
    }
    else {
        cout<<num<<" : is Non-Prime Number.";
    }
    return 0;
}
/*
1. check if a number is prime or not.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    
    bool isPrime=true;

    for(int i=2;i<num-1;i++){
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
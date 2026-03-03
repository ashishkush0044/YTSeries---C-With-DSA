/*
1. Bitwise Operators code.
*/

#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter last number : ";
    cin>>num2;

    cout<<"Bitwise operators of "<<num1<<" and "<<num2<<" is : "<<(num1 & num2);
    cout<<endl;

    return 0;
}
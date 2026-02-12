// CALCULATOR ASSIGNMENT :- 

#include <iostream>
using namespace std;

int main() {
    double num1,num2;
    char oper;

    cout<<"Enter First Number : ";
    cin>>num1;

    cout<<"Enter a Operator ('+','-','*','/','%') : ";
    cin>>oper;

    cout<<"Enter Last Number : ";
    cin>>num2;

    if(oper=='+') {
        cout<<"Addition of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
    }
    else if(oper=='-') {
        cout<<"Difference of "<<num1<<" and "<<num2<<" is : "<<num1-num2<<endl;
    }
    else if(oper=='*') {
        cout<<"Product of "<<num1<<" and "<<num2<<" is : "<<num1*num2<<endl;
    }
    else if(oper=='/') {
        cout<<"Division of "<<num1<<" and "<<num2<<" is : "<<num1/num2<<endl;
    }
    return 0;
}
/*
7. Calculate nCr binomial coefficient for nCr.
*/

#include <iostream>
using namespace std;

int factorial(int num) {
    int fact=1;
    for(int i=1; i<=num; i++) {
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r) {
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nMr=factorial(n-r);

    return fact_n/(fact_r*fact_nMr);
}
int main() {
    int num1, num2;
    cout<<"Enter a number for 'n' : ";
    cin>>num1;
    cout<<"Enter a number for 'r' : ";
    cin>>num2;

    cout<<"nCr of two numbers is : "<<nCr(num1, num2);
    cout<<endl;

    return 0;
}
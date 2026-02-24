/*
4. Calculate the sum of two numbers from 1 to N.
*/

#include <iostream>
using namespace std;

double sumN(double N) {
    double sum=0;

    for(double i=0; i<=N; i++){
        sum+=i;
    }
    return sum;
}
int main() {
    cout<<"Sum of 1 to N Numbers : "<<sumN(5)<<endl;
    cout<<"Sum of 1 to N Numbers : "<<sumN(10.5)<<endl;
    cout<<"Sum of 1 to N Numbers : "<<sumN(15)<<endl;
    cout<<"Sum of 1 to N Numbers : "<<sumN(8)<<endl;
    cout<<"Sum of 1 to N Numbers : "<<sumN(20)<<endl;
    cout<<"Sum of 1 to N Numbers : "<<sumN(25)<<endl;

    return 0;
}
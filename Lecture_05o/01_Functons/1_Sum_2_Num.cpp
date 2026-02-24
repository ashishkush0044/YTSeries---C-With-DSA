/*
1. calculate the sum of 2 numbers.
*/

#include <iostream>
using namespace std;

//sum of 2 numbers
double sum(double a, double b) {
    double s=a+b;

    return s;
}
int main() {
    cout<<"Sum of Two Numbers : "<<sum(10.99, 5.65)<<endl;

    return 0;
}
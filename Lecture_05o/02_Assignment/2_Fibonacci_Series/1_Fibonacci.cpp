/*
3. Write a function to print Nth Fibonacci.
*/

#include <iostream>
using namespace std;

int fibonacciN(int num) {
    int num1=0;
    int num2=1;
    int count=0;

    cout<<"Fabonacci Series of "<<num<<" is : ";
    for(int i=0; i<=num; i++) {
        cout<<num1<<",";
        
        count=num1+num2;
        num1=num2;
        num2=count;
    }
    cout<<endl;

    return count;
}
int main() {
    int num;
    cout<<"Enter Positive Number for Fabonacci : ";
    cin>>num;

    cout<<"Sum of Fabonacci Numner "<<num<<" is : "<<fibonacciN(num);
    cout<<endl;

    return 0;
}
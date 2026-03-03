/*
4. BITWISE LEFT SHIFT(<<) OPERATOR.
*/

#include <iostream>
using namespace std;

int main() {
    int num, leftShift;
    cout<<"Enter a Number : ";
    cin>>num;
    cout<<"Enter value for Left Shift : ";
    cin>>leftShift;

    cout<<"Bitwise LEFT SHIFT "<<num<<" is : "<<(num<<leftShift);
    cout<<endl;

    return 0;
}
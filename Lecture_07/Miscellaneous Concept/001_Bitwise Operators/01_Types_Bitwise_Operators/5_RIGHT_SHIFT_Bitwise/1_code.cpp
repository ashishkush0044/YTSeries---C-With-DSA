/*
4. BITWISE Right SHIFT(>>) OPERATOR.
*/

#include <iostream>
using namespace std;

int main() {
    int num, rightShift;
    cout<<"Enter a Number : ";
    cin>>num;
    cout<<"Enter value for Right Shift : ";
    cin>>rightShift;

    cout<<"Bitwise RIGHT SHIFT "<<num<<" is : "<<(num>>rightShift);
    cout<<endl;

    return 0;
}
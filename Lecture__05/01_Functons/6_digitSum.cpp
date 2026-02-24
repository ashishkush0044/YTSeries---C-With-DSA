/*
6. Calculate the sum of digits of a Number.
*/

#include <iostream>
using namespace std;

int digitSum(int num) {
    int digSum=0;
    while(num>0) {
        int lastdig=num%10;
        num/=10;
        digSum+=lastdig;
    }
    return digSum;
}
int main() {
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

    cout<<"sum of "<<num<<" is : "<<digitSum(num);
    cout<<endl;

    return 0;
}
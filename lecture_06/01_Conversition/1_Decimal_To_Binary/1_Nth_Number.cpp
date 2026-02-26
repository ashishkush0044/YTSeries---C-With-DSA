/*
1. Convert the nth number decimal to binary.
*/

#include <iostream>
using namespace std;

int decToBin(int decNum) {
    int ans=0, pow=1;

    while(decNum>0) {
        int rem=decNum%2;      //give remainder
        decNum/=2;            //update decNum

        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main() {
    int decNum;
    cout<<"Enter a Decimal Number For converting to form of Binary Number : ";
    cin>>decNum;

    cout<<decNum<<" Decimal Number is form of Binary Number is : "<<decToBin(decNum);
    cout<<endl;

    return 0;
}
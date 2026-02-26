/*
1. Convert the nth number binary to decimal.
*/

#include <iostream>
using namespace std;

int binToDec(int binNum) {
    int ans=0, pow=1;

    while(binNum>0) {
        int rem=binNum%10;   // remainder nikalne ke liye
        ans+=(rem*pow);      
        // update state
        binNum/=10;
        pow*=2;
    }
    return ans;    //decimal
}
int main() {
    int binNum;
    cout<<"Enter a Binary Number to convert the form of Decimal : ";
    cin>>binNum;

    cout<<binToDec(binNum);
    cout<<endl;

    return 0;
}
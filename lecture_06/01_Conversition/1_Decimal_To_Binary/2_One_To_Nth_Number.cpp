/*
1. Convert the 1st to nth number decimal to binary.
*/

#include <iostream>
using namespace std;

int decToBin(int num) {
    int ans=0, pow=1;
    while(num>0) {
        int rem=num%2;
        num/=2;

        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"Binary Number 1st to "<<num<<" is : \n";
    for(int i=1; i<=num; i++) {
        cout<<decToBin(i)<<endl;
    }
    cout<<endl;

    return 0;
}
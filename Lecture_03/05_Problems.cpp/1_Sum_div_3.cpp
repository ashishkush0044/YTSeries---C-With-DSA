/*
1. Sum of all numbers from 1 to N which are divisible by 3.
*/

#include <iostream>
using namespace std;

int main() {
    int num, sum=0;
    cout<<"Enter a Number : ";    // 10
    cin>>num;
    
    for(int i=1; i<=num; i++) {   // 1,2,3,4,5,6,7,8,9,10
        if(num%i==0) {     // 3,6,9
            sum+=i;   // 3+6+9 = 18
        }
    }
    cout<<"Sum of Numbers from 1 to "<<num<<" which are divisible by 3 : "<<sum<<endl;

    return 0;
}
/*
4. Sum of all odd numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int num=1;
    int oddSum=0;
    
    while(num<=10) {     // 1,2,3,4,5,6,7,8,9,10
        if(num%2!=0) {    // 1,3,5,7,9
            oddSum+=num;   // 1+3+5+7+9
        }
        num++;
    }
    cout<<"Sum of Odd Number : "<<oddSum<<endl;

    return 0;
}
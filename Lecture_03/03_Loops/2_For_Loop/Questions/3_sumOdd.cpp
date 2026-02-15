/*
3. Sum of all odd numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int num=10, oddSum=0;
    
    for(int i=1;i<=num;i++) {     // 1,2,3,4,5,6,7,8,9,10
        if(i%2!=0) {        // 1,3,5,7,9
            oddSum+=i;   // 1+3+5+7+9 = 25
        }
    }
    cout<<"Sum of Odd Numbers : "<<oddSum<<endl;

    return 0;
}
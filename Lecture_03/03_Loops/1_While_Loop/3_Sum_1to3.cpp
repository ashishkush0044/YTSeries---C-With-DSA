/*
3. Sum of Numbers 1 to 3.
*/

#include <iostream>
using namespace std;

int main() {
    int num=1;
    int sum=0;

    while(num<=3) {
        cout<<num<<" ";
        sum+=num;
        num++;
    }
    cout<<"\n"<<"sum of numbers 1 to 3 is : "<<sum<<endl;
    return 0;
}
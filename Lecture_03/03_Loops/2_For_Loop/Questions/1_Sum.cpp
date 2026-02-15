/*
1. Sum o two Numbers 1 to 3.
*/

#include <iostream>
using namespace std;

int main() {
    int num=3;
    int sum=0;

    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout<<"SUM : "<<sum<<endl;

    return 0;
}
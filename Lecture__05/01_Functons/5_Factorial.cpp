/*
5. Calculate N factorial.
*/

#include <iostream>
using namespace std;

int factN(int N) {
    int fact=1;
    for(int i=1; i<=N; i++) {
        fact*=i;
    }
    return fact;
}
int main() {
    cout<<"Factorial of N number is : "<<factN(5)<<endl;
    cout<<"Factorial of N number is : "<<factN(10)<<endl;
    cout<<"Factorial of N number is : "<<factN(8)<<endl;

    return 0;
}
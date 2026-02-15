/*
2. Print Factorial of a Number N.
Here,
    N! = 1*2*3*4*_ _ _ _ _*N.
here you can take N = 2
                  N = 3
                  N = 4
                  N = 5
                  N = 6
*/

#include <iostream>
using namespace std;

int main() {
    int N, fact=1;
    cout<<"Enter a Number : ";   //5
    cin>>N;

    for(int i=1; i<=N; i++) {    // 1,2,3,4,5
        fact*=i;          // 1*2*3*4*5 = 120
    }
    cout<<"Factorial of a Number "<<N<<" is : "<<fact<<endl;

    return 0;
}
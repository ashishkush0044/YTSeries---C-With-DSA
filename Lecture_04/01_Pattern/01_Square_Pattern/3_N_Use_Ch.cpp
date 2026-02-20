/*
3. use character form , n times run,
    A B C D
    A B C D
    A B C D
    A B C D
*/

#include <iostream>
using namespace std;

int main() {
    int n;  
    cout<<"Enter a Number : ";   // 4
    cin>>n;

    for(int i=1; i<=n; i++) {    // A,B,C,D
        char ch='A';
        for(int j=1; j<=n;j++) {    // A,B,C,D
            cout<<ch<<" ";    // A B C D
            ch+=1;     // A -->B, B-->C, C-->D 
        }
        cout<<endl;
    }
    return 0;
}
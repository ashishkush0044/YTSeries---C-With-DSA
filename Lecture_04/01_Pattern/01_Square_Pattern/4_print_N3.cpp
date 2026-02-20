/*
4. print :- 
    1 2 3
    4 5 6
    7 8 9
*/

#include <iostream>
using namespace std;

int main() {
    int N, num =1;
    cout<<"Enter a Number : ";
    cin>>N;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
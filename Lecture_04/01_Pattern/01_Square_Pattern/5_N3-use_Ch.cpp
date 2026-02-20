/*
5. print :- 
    A B C
    D E F
    G H I

NOTE :- ASCII value [A - Z] ---> [65 - 90]
                    [a - z] --> [97 - 122]s
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter a number : ";
    cin>>N;
    
    char ch='A'; 

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
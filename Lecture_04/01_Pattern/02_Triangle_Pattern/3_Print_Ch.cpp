/*
3. Easy with character , n=4
    A
    B B
    C C C
    D D D D
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    
    for(int i=0; i<num; i++){
        char ch='A'+i;
        for(int j=0; j<i+1; j++) { 
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
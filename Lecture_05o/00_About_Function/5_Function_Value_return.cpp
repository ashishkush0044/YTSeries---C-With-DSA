#include <iostream>
using namespace std;

int printHello() {
    cout<<"hello\n";
    return 3;         //function value return
}
int main() {
    //function call
    cout<<printHello() <<endl;
}
/*
output :-
hello
3
*/
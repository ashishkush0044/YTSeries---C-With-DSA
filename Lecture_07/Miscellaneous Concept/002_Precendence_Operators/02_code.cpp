/*
2. Precedence Operators.
*/

#include <iostream>
using namespace std;

int main() {
    // 1.
    cout<<(5-2*6);
    cout<<"\n"<<((5-2)*6);
    cout<<"\n"<<(5-(2*6));
    // 2. Left to Right
    cout<<"\n"<<(4*5%2);
    cout<<endl;

    return 0;
}
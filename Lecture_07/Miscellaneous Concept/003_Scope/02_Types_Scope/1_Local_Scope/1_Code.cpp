// OUTPUT :- error: 'x' was not declared in this scope

// if-else
#include <iostream>
using namespace std;

int main() {
    if(3>1) {
        int x=10;
    }
    else {
        int x=10;
    }
    cout<<x<<endl;

    return 0;
}
//LOOP
//OUTPUT :- error: 'i' was not declared in this scope
#include <iostream>
using namesapace std;

int main() {
    for(int i=0; i<10; i++) {

    }
    cout<<i<<endl;
}
//FUNCTIONS
//OUTPUT :- error: 'x' was not declared in this scope
#include <iostream>
using namespace std;

void fun() {
    int x=10;
}
int main() {
    fun();
    
    cout<<x<<endl;

    return 0;
}
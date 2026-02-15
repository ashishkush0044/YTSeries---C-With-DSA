/*
BREAK STATEMENT :- Wherever the break keyword is placed inside the loop,
                   the code will be exited from there.

2. print sum of numbers from 1 to 50. and using break keyword after number 5 is coming.
*/

#include <iostream>
using namespace std;

int main() {
    int num=50;
    int sum=0;

    for(int i=1;i<=num;i++) {      //1,2,3,4,5
        sum+=i;       // 1+2+3+4+5 = 15
        if(i==5) {
            break;
        }
    }
    cout<<"SUM : "<<sum<<endl;

    return 0;
}
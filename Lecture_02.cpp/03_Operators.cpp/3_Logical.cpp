#include <iostream>
using namespace std;

int main() {
/*
1. OR :- only 'one-statement' right than return 'true' --> 1
         and both condition is false than return 'false' --> 0 
*/
    cout<<"OR_1 : "<<((3<1)||(3<5))<<endl;   // 1st statement - 'false' and 2nd statement - 'true'.
    cout<<"OR_2 : "<<((3<1)||(2<1))<<endl;   // bothe statement - 'false'

/*
2. AND :- both statement is true than return 'true' --> 1
        otherwise return 'false' --> 0
*/
    cout<<"AND_1 : "<<((3>1)&&(3>2))<<endl;    // bothe statement - 'true'
    cout<<"AND_2 : "<<((3>1)&&(3>5))<<endl;   // 1st statement - 'true' and 2nd statement - 'false'.
/*
3. NOT :- if statement is 'true' than return value in 'false' --> 0
          and if statemt is 'false' than return value in 'true' --> 1
*/
    cout<<"NOT : "<<!(3<5)<<endl;    // here, 3<5 is 'true' but retun in 'false'

    return 0;
}
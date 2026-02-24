/*
3. Calculate the Minimum of Two Numbers.
*/

#include <iostream>
using namespace std;

//function definition
double min(double a, double b) {
    if(a<b) {     //if 'a' less than 'b'
        return a;   //'a' is minimum
    }
    else {
        return b;
    }
}
//main
int main() {
    cout<<"Minimum value of Two numbers : "<<min(5.8, 3.5)<<endl;

    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    int a=11, b=5;
    int sum=a+b;
    
    cout<<"sum of a and b is : "<<sum<<endl;
    return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
    int a=11, b=5;
    cout<<"Sum : "<<(a+b)<<endl;
    cout<<"Difference : "<<(a-b)<<endl;
    cout<<"Product : "<<(a*b)<<endl;
    cout<<"Division : "<<(a/b)<<endl;   // division always return value in form of 'int'.
    cout<<"Modulo : "<<(a%b)<<endl;     // modulo means 'remainder'.
// if return value in deciaml than we can use 'double' or 'float' with the help of 'type casting'.
    cout<<"Decimal Division : "<<(a/(double)b)<<endl;

    return 0;
}
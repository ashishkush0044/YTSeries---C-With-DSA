// Programmer manually converting data from one type to another type.

#include <iostream>
using namespace std;

int main() {
    double price=100.99;
    
    int new_price=(int)price;
    cout<<new_price<<endl;
    cout<<sizeof(new_price)<<endl;
    
    return 0;
}
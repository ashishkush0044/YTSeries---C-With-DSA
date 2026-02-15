#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a Number : \n";
    cin>>num;

    if(num%2==0) {
        cout<<"num is Even Number.\n";
    }
    else {
        cout<<"num is Odd Number.\n";
    }
    return 0;
}
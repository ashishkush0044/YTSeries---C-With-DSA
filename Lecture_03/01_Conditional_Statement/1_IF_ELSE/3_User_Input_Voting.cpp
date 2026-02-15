// Voting system and take user input.

#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age : \n";
    cin>>age;

    if(age>=18) {
        cout<<"You are eligible for voting.\n";
    }
    else {
        cout<<"You are not eligible for voting because you are below 18.\n";
    }
    return 0;
}
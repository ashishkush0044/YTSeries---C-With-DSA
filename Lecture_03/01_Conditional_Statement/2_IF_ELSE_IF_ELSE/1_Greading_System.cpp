/*
1. Greading System :-
    marks>=90 --> A
      80 - 90 --> B
          <80 --> C
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter Your Marks :\n";
    cin>>marks;

    if(marks>=90) {
        cout<<"Grade : A\n";
    }
    else if(marks>=80 && marks<90) {
        cout<<"Grade : B\n";
    }
    else {
        cout<<"Grade : C\n";
    }
    return 0;
}
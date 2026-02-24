/*
.
*/

#include <iostream>
using namespace std;

int main() {
    char grade;
    cout<<"Enter Your Grade : ";
    cin>>grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!";
            break;
        case 'B':
            cout << "Good!";
            break;
        case 'C':
            cout << "Fair!";
            break;
        default:
            cout << "Invalid grade";
    }
    return 0;
}
/*
1. WAF for Grading System.
*/

#include <iostream>
using namespace std;

string isGrade(char grade) {
    switch(grade) {
        case 'A':
            return "excellent";
        case 'B':
            return "good";
        case 'C':
            return "not bad";
        case 'D':
            return "Fail";
        default:
            return "invalid grade!";
    }
}
int main() {
    char grade;
    cout<<"Enter Your Grade : ";
    cin>>grade;

    cout<<"Result : "<<isGrade(grade);
    cout<<endl;

    return 0;
}
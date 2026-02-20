/*
with characters, n=4.
      A
    A B A
  A B C B A
A B C D C B A
*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cout<<"Enter a Number : ";
  cin>>num;

  //outer loop
  for(int i=1; i<=num; i++) {
    //print spaces
    for(int j=1; j<=num-i; j++) {
      cout<<" ";
    }
    // left triangle
    for(int j=0; j<i; j++) {
      cout<<char('A'+j);
    }
    //right triangle
    for(int j=i-2; j>=0; j--) {
      cout<<char('A'+j);
    }
    cout<<endl;
  }
  return 0;
}
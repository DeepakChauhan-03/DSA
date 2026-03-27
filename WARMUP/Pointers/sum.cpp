//WAP to print the sum of two numbers using pointers
#include<iostream>
using namespace std;
int main(){
  int x = 2;
  int y = 3;
  int *p1 = &x;
  int *p2 = &y;
  cout<<"Sum is : "<<*p1+*p2;

    return 0;
}
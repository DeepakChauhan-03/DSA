//WAP to print the products of digits of a given number
#include<iostream>
using namespace std;
int main(){
  int n,last,product=1;
  cout<<"Enter any number : ";
  cin>>n;
  while(n!=0){
    last = n%10;
    product = product*last;
    n = n/10;
  }

  cout<<product;

    return 0;
}
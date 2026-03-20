//Take a three digit number and check if all digits are distinct
#include<iostream>
using namespace std;
int main(){
  int n,a,b,c;
  cout<<"Enter a three digit number : ";
  cin>>n;
  a = n%10;
  b = n/10%10;
  c = n/100%10;
  if(a!=b  && b!=c  && a!=c){
    cout<<"All three digits are distinct";
  }
  else{
    cout<<"All three digits are not distinct";
  }


    return 0;
}
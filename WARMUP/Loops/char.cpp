//WAP to check if it is letter , digits or neither
#include<iostream>
using namespace std;
int main(){
  char c;
  cout<<"Enter any character : ";
  cin>>c;
  if(c>='a' && c<'z'){
    cout<<"It is a letter ";
  }
  else if(c>='0' && c<='9'){
    cout<<"It is digit.";
  }
  else{
    cout<<"Neither letter nor digit.";
  }
    return 0;
}
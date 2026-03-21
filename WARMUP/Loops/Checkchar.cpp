//Take an alphabet character and check it lies between a and m or n and z
#include<iostream>
using namespace std;
int main(){
  char c;
  cout<<"Enter any character : ";
  cin>>c;
  if(c>='a' && c<='m'){
    cout<<"It lies between a to m";
  }
  else if(c>='n' && c<='z'){
    cout<<"It lies between n to z";
  }

    return 0;
}
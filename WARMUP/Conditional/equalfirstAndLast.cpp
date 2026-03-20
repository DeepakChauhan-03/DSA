//take a 4 digit number and check if the first and last digits are equal
#include<iostream>
using namespace std;
int main(){
   int digit,first,last;
   cout<<"Enter any digit : ";
   cin>>digit;
   last = digit%10;
   first = digit/1000%10;
   if(first==last){
    cout<<"First and last digits are equal.";
   }
   else{
    cout<<"First and last digits are not equal.";
   }
    return 0;
}
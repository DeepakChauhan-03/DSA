//Check a number is multiole of seven or ends with seven
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter any number : ";
   cin>>n;
   if(n%10==7){
    cout<<"Number is end's with seven.";
   }
   if(n%7==0){
    cout<<"It is multiple of seven.";
   }
   else{
    cout<<"not multiple of seven";
   }
    return 0;
}
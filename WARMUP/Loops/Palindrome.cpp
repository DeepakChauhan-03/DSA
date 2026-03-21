//WAP to ceheck a number is palindrome or not
#include<iostream>
using namespace std;
int main(){
   int n,m,last,rev=0;
   cout<<"Enter any number : ";
   cin>>n;
   m = n;
   while(n!=0){
     last = n%10;
     rev = rev*10+last;
     n = n/10;
   }
   if(rev==m){
    cout<<"Palindrome number.";
   }
   else{
    cout<<"It is not an palindrome number.";
   }

    return 0;
}
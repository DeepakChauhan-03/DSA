//WAP to count number of digits in a given number
#include<iostream>
using namespace std;
int main(){
   int n,count;
   count = 0;
   cout<<"Enter any number : ";
   cin>>n;
   while (n!=0)
   {
      n = n/10;
      count++;
   }
   cout<<count;
   

    return 0;
}
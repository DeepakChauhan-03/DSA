//WAP to print all numbers between 1-100 whose sum of digits is even
#include<iostream>
using namespace std;
int main(){
   int count=0;
   for(int i=1; i<=500; i++){
    if(i%7==0  && i%5!=0){
        count++;
    }
   }
   cout<<count;

    return 0;
}
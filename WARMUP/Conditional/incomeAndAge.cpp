//Take income and age and check if it is eligible for tax(age>18 and income>5)
#include<iostream>
using namespace std;
int main(){
   int age,income;
   cout<<"Enter your age : ";
   cin>>age;
   cout<<"Enter your income : ";
   cin>>income;
   if(age>18){
        if(income>=500000){
            cout<<"Eligible for income tax ";
        }
        else{
            cout<<"Not eligible for income tax";
        }
   }
   else{
    cout<<"Not eligible for income tax as your age is les than 18.";
   }

    return 0;
}
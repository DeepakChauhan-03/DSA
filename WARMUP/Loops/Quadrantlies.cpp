//WAP to take coordinates x,y and cehck whichquadrant they lies
#include<iostream>
using namespace std;
int main(){
   int x,y;
   cout<<"Enter x coordinate : ";
   cin>>x;
   cout<<"Enter y coordinate : ";
   cin>>y;
   if(x>0  && y>0){
    cout<<"They lies in first quadrant";

   }
   else if(x>0 && y<0){
    cout<<"They lies in second quadrant";
   }
   else if(x<0  && y<0){
    cout<<"Third quadrant";
   }
   else if(x<0 && y>0){
    cout<<"Fourth quadrant";
   }

    return 0; 
}
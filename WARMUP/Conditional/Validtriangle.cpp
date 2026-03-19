//take three sides of a triangle and check if it is form a valid triangle
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if((a+b)>c  && (a+c)>b  && (b+c)>a){
        cout<<"Valid traingle";

         if(a==b && b==c){
            cout<<"Equilateral Triangle";
        }
        else if(a==b || b==c || a==c){
            cout<<"Isosceles Triangle";
        }
        else{
            cout<<"Scalene Triangle";
        }
    }
    
    else{
        cout<<"Not a valid traingle";
    }
    
    return 0;
}
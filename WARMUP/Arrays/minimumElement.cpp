//WAP to find minimum value out of all elements
#include<iostream>
using namespace std;
int main(){
   int arr[5]= {10,5,1,70,90};
   int min = arr[0];
   for(int i=0; i<5; i++){
    if(arr[i]<min){
        min = arr[i];
    }
   }
   cout<<"Minimum value of array is : "<<min;


    return 0;
}
//WAP to find maximum value out of all elements
#include<iostream>
using namespace std;
int main(){
   int arr[5]= {10,20,120,70,90};
   int max = arr[0];
   for(int i=0; i<5; i++){
    if(arr[i]>max){
        max = arr[i];
    }
   }
   cout<<"Maximum value of array is : "<<max;


    return 0;
}
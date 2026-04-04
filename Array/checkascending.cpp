//WAP to check if array is sorted in ascending order or not
#include<iostream>
using namespace std;
int main(){
   int arr[6] = {1,3,5,6,12,33};
   bool flag = true;
   for(int i=0; i<5; i++){
    if(arr[i]>arr[i+1]){
          flag = false;
          break;
    }
   }
   if(flag){
    cout<<"Array is sorted ";
   }
   else{
    cout<<"Array is not sorted";
   }

    return 0;
}
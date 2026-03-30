//WAP to find second largest element of an array
#include<iostream>
using namespace std;
int main(){
  int arr[5] = {1,2,4,3,5};
  int max = arr[0];
  int secMax = arr[0];
  for(int i=0; i<5;i++){
    if(arr[i]>max){
        max = arr[i];
    }
  }

  for(int i=0; i<5; i++){
    if(arr[i]!=max && secMax<arr[i]){
        secMax = arr[i];
    }
  }
  cout<<"Second max. element of array is : "<<secMax;

    return 0;
}
//WAP to count common elements in an array
#include<iostream>
using namespace std;
int main(){
  int arr[5] = {1,2,3,4,5};
  int brr[5] = {1,3,7,5,9};
  int count = 0;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(arr[i]==brr[j]){
            count++;
        }
    }
  }
  cout<<"Common elements are : "<<count;

    return 0;
}
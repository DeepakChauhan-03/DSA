//WAP to check if a array is sorted in ascending order
#include<iostream>
using namespace std;
int main(){
  int arr[5] = {2,3,4,5,6};
  bool flag = true;
  for(int i=0; i<4; i++){
    if(arr[i]>arr[i+1]){
        flag = false;
    }
  }
  if(flag==true){
      cout<<"Sorted";
  }
  else{
    cout<<"not sorted";
  }

    return 0;
}
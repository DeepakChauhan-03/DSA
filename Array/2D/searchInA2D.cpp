// WAP to search in a 2D matrix
#include<iostream>
using namespace std;

int main(){
  int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int target;
  bool found = false;   // flag variable

  cout<<"Enter the element to be search : ";
  cin>>target;

  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        if(arr[i][j] == target){
            cout<<"Element is found at index : "<<i<<","<<j;
            found = true;   // element mil gaya
        }
    }
  }

  // agar element nahi mila
  if(found == false){
      cout<<"Element not found";
  }

  return 0;
}
//WAP to rotate a matrix by 90 degree
#include<iostream>
using namespace std;
int main(){
   int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int n = sizeof(arr)/sizeof(arr[0]);   //size of matrix
  
   //transpose code
   for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
       int k = arr[i][j];
        arr[i][j] = arr[j][i];
         arr[j][i] = k;
    }
   }
 // reverse each row
for(int i=0; i<n; i++){
    int start = 0;
    int end = n-1;
    while(start < end){
        int temp = arr[i][start];
        arr[i][start] = arr[i][end];
        arr[i][end] = temp;
        start++;
        end--;
    }
}

   //print the matrix
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}
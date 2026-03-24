//WAP to take inpur of array and print them
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter any number : ";
   cin>>n;
   int arr[n];
   cout<<"Enter value of array : ";
   for(int i=0; i<=n; i++){
    cout<<"Enter value of "<<i<<" position of array : ";
    cin>>arr[i];
   }
   cout<<"Output \t";
   for(int i=0; i<=n; i++){
    cout<<arr[i]<<endl;
   }

    return 0;
}
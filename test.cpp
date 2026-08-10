#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter size of array : ";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter elements of array : ";
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    int n;
    cin>>n;
    if(n%n==0 && n%1==n){
        cout<<"Prime number";
    }
    else{
        cout<<"Not prime number";
    }
   



    return 0;
}
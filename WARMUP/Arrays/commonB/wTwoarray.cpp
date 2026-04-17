//WAP to find common element between two array
#include<iostream>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
int brr[5] = {5,6,7,8,9};
cout<<"Common elements between two array is : ";

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(arr[i]==brr[j]){
            cout<<arr[i]<<endl;
        }
    }
}

    return 0;
}

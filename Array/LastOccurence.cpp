//WAP to find last occurence of a array
#include<iostream>
using namespace std;
int main(){
 int arr[6] = {2,1,4,5,1,2};
 int x,idx;
 cout<<"Enter the value : ";
 cin>>x;
 idx= -1;
 for(int i=0; i<6; i++){
    if(x==arr[i]){
        idx = i;
    }
 }
 cout<<"Last index is : "<<idx;

    return 0;
}
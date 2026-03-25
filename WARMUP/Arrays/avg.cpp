//WAP to find average of array elements
#include<iostream>
using namespace std;
int main(){
    int arr [5] = {1,2,3,4,5};
    int sum = 0,avg;
    for(int i=0; i<5; i++){
        sum = sum + arr[i];
    }
    avg = sum/5;
    
    cout<<"Average of array is : "<<avg;

    return 0;
}
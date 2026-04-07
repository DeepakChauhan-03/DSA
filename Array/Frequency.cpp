//WAP to count frequency of element in array
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array : ";
  cin>>n;
  int arr[n];
  //taking input in array
  cout<<"Enter elements of array : ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  //find max element from the array
  int max = arr[0];
  for(int i=0; i<n; i++){
    if(max<arr[i]){
        max = arr[i];
    }
  }
  //creating frequency array
  int freq[max+1] = {0};

  for(int i=0; i<n; i++){
    freq[arr[i]]++;
  }

   // Step 4: Printing frequency
    cout<<"Frequency of elements:\n";
    for(int i=0;i<=max;i++)
    {
        if(freq[i] > 0)
            cout<<i<<" occurs "<<freq[i]<<" times\n";
    }


    return 0;
}
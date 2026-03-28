//WAP to print star bridge
#include<iostream>
using namespace std;
int main(){
  int n; 
  cout<<"Enter no. of rows : ";
  cin>>n;
  int m= n-1; //no. of lines

  for(int i=1; i<=2*n-1; i++){
    cout<<"*";
  }
cout<<endl;

  for(int i=m; i>=1; i--){
    for(int j=1; j<=i; j++){
        cout<<"*"; 
    }
   cout<<" ";
    //spaces
    for(int k=1; k<=2*(m-i); k++){
        cout<<" ";
    }
   for(int j=1; j<=i; j++){
        cout<<"*"; 
    }
    cout<<endl;

  }
    return 0;
}
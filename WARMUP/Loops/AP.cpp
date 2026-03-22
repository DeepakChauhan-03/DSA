//WAP to print AP of nth term
#include<iostream>
using namespace std;
int main(){
  int first,diff,nterm;
  cout<<"Enter first term : ";
  cin>>first;
  cout<<"Enter common difference : ";
  cin>>diff;
  cout<<"Enter nth term : ";
  cin>>nterm;

  for(int i=1; i<=nterm; i++){
    int ap = first + (i-1)* diff;
    cout<<ap<<" ";
  }

    return 0;
}
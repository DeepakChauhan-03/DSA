//WAP to print sum of n natural number
#include<iostream>
using namespace std;
int main(){
  int n,sum = 0;
  cout<<"Enter any number : ";
  cin>>n;
  for(int i=1; i<=n; i++){
      sum = sum + i;
  }
  cout<<"Sum of "<<n<<" Natural number is :"<<sum;

    return 0;
}
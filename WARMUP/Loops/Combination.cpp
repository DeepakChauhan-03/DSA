//WAP to find combination
#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
  int n,r;
  cout<<"Enter n : ";
  cin>>n;
  cout<<"Enter r : ";
  cin>>r;
  cout<<"Combination is : "<<((fact(n)/fact(r)) * fact(n-r));

    return 0;
}
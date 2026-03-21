//WAP to print factorial of a number using for loop
  #include<iostream>
  using namespace std;
  int main(){
    int n, factorial=1;
    cout<<"Enter any number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
       factorial = factorial*i; 
    }
    cout<<factorial;

    return 0;
  }
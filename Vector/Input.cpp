//WAP to take input in a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector <int> v;

   for(int i=0; i<5; i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
cout<<"Value of vector is : ";
for(int i=0; i<5; i++){
    cout<<v[i]<<" ";
}

    return 0;
}
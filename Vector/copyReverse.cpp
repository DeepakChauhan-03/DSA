//WAP to reverse an array without using extra array
#include<iostream>
#include<vector>
using namespace std;

void display(vector <int>& n){
    for(int i=0; i<n.size(); i++){
        cout<<n[i]<< " ";
    }
    cout<<endl;
}

int main(){
  vector <int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);

  display(v);
  //reversing the array
 for(int i=0,j=v.size()-1; i<=j; i++,j--){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
 }

 display(v);

    return 0;
}
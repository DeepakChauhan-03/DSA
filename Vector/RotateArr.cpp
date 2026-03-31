//WAP to rotate an array 
#include<iostream>
#include<vector>
using namespace std;

void display(vector <int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reverse(int i , int j , vector <int> & v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

}

int main(){
  vector <int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  v.push_back(60);
  display(v);
  int n = v.size();
 int k = 2;   //rotation = 2
  reverse(0,n-k-1,v); //first part 

  reverse(n-k, n-1, v); //second part 

  reverse(0,n-1,v); //whole arr

  display(v);


    return 0;
}
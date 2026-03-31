#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> & v){
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

  reverse(1,4,v);
  display(v);

    return 0;
}
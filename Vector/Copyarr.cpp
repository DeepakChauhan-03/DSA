//WAP to copy an array into a new array in reverse order
#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
  vector <int> v1;
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  v1.push_back(50);

  display(v1);

  vector <int> v2(v1.size());
  for(int i=0; i<v2.size(); i++){
        //i+j = size-1
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
  }

  display(v2);

    return 0;
}
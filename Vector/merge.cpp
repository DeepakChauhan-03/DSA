//WAP to merge an array
#include<iostream>
#include<vector>
using namespace std;

void display(vector <int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

int main(){
 vector <int> v1;
 v1.push_back(1);
 v1.push_back(2);
 v1.push_back(3);
 v1.push_back(4);
 v1.push_back(5);
 display(v1);
 vector <int> v2;
 v2.push_back(11);
 v2.push_back(22);
 v2.push_back(33);
 v2.push_back(44);
 v2.push_back(55);
 display(v2);
//merging
 
vector <int> v3;
for(int i=0; i<v1.size(); i++){
    v3.push_back(v1[i]);
}
for(int i=0; i<v2.size(); i++){
    v3.push_back(v2[i]);
}
display(v3);
    return 0;
}
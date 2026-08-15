#include<iostream>
#include<vector>
using namespace std;

void reverse(int i, int j, vector <int> &v){
    while(i<j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
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

    int first = 0;
    int last = v.size()-1;
    // while(first<last){
    //     int temp = v[first];
    //     v[first] = v[last];
    //     v[last] = temp;
    //     first++;
    //     last--;
    // }
    reverse(1,3,v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    

    return 0;
}
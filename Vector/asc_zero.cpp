//WAP to arrange the negative elements first and negative at last
#include<iostream>
#include<vector>
using namespace std;
//print
void display(vector <int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector <int> v;
   v.push_back(4);
   v.push_back(-6);
   v.push_back(-5);
   v.push_back(1);
   v.push_back(2);
   v.push_back(-3);

   int first = 0;
   int last = v.size()-1;
   while(first<last){
     if(v[first]<0) first++;
     else if(v[last]>0) last--;
     else if(v[first]>0 && v[last]<0){
        int temp= v[first];
        v[first] = v[last];
        v[last] = temp;

        first++;
        last--;
     }
   }
 

   
   display(v);
    return 0;
}
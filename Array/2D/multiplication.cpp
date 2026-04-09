//WAP for multiplication of a matrix
#include<iostream>
using namespace std;
int main(){
   int m,n;
   cout<<"Enter rows of 1st matrix : ";
   cin>>m;
   cout<<"Enter columns of 1st matrix : ";
   cin>>n;
   //second matrix
   int p,q;
   cout<<"Enter rows of second matrix : ";
   cin>>p;
   cout<<"Enter cols. of second matrix : ";
   cin>>q;

   //array formation
   if(n==p){
       int a[m][n];
       int b[p][q];
       cout<<"Enter elements of first matrix : ";
       for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
       }

       cout<<"Enter elements of second array : ";
       for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>b[i][j];
        }
       }
       //resultant matrix
       int res[m][q];
       for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
           //res[i][j] = a[i][0]*b[0][i] + a[i][1]*b[1][j]
           res[i][j] = 0;
           for(int k=0; k<p; k++){
               res[i][j] += a[i][k]*b[k][j];
           }
        }
       }
       //print
       for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
       }
   }
   else{
    cout<<"Matrix cannot be multiplied";
   }

    return 0;
}

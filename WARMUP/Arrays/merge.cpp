#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int brr[] = {5,6,7,8,9};

    int n1 = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(brr)/sizeof(brr[0]);

    int crr[n1 + n2];

    // copy first array
    for(int i=0; i<n1; i++)
        crr[i] = arr[i];

    // copy second array
    for(int i=0; i<n2; i++)
        crr[n1 + i] = brr[i];

    // print merged array
    for(int i=0; i<n1+n2; i++)
        cout << crr[i] << " ";

    return 0;
}
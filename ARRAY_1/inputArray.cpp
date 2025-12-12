#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"eneter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enetr the lements of array ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the size ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //serching code
    int x;
    cout<<"enetr the elemeny you want to search ";
    cin>>x;

    bool flag=false; //elemt is not persent in my array
    for(int i=0; i<n; i++){
        if(arr[i]==x) flag=true;
    }

    if(flag==true) cout<<"elemnt found";
    else cout<<"element not found";
}
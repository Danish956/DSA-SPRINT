#include<iostream>
using namespace std;
int main(){
    int arr[]={5,5,9,7,8,6,3,5,9,7,8,6,3,8,2,1,8,77,66};
    cout<<sizeof(arr)<<endl; //28
    cout<<sizeof(arr[0])<<endl; //4
    cout<<sizeof(arr)/sizeof(arr[3]);

}
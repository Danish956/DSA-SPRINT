#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    cout<<v.size()<<endl; //1
    cout<<v.capacity()<<endl; //1
    cout<<"-----------"<<endl;

    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"-----------"<<endl;

    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;


}
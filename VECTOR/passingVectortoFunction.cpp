#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void change(vector<int> &a){ //pass by value and pass by refrence
    a[0]=100;
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(3);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    change(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

}
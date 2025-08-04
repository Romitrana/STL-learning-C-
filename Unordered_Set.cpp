#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> mySet;
    vector<int> v = {10,20,30,20,40,50,40,60};
    cout<<"---vector element---"<<endl;
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        mySet.insert(v[i]);
    }
    cout<<"---Set element---"<<endl;
       for(int ele : mySet){
        cout<<ele<<" ";
    }
    return 0;
}
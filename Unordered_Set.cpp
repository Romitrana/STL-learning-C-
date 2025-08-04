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

     //check set is empty 
     if(mySet.empty()){
        cout<<"Set is empty"<<endl;
     }else{ 
          cout<<"Set is Not empty"<<endl;
     }
     cout<<endl;
     //count in set
     if(mySet.count(50)){
        cout<<"50 is present"<<endl;
     }else{
        cout<<"50 is Not present"<<endl;
     }

     //find

     auto it = mySet.find(40);
     if(it!=mySet.end()){
        cout<<"40 is found"<<endl;
     }else{ 
        cout<<"40 does not exist in set";
     }

    //erase
    mySet.erase(60); 
   for(int ele : mySet){
        cout<<ele<<" ";
    }
    //clear
    mySet.clear();

   for(int ele : mySet){
        cout<<ele<<" ";
    }
    if(mySet.empty()){
        cout<<endl<<"whole set is empty now";
    }
    return 0;
}
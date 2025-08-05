#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm> //sort comming from here...
using namespace std;

int main(){
   vector<int> v;
   v.push_back(3);
   v.push_back(8);
   v.push_back(2);
   v.push_back(13);
   v.push_back(4);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   //fist last pointer
   
//    for(auto i=v.begin();i<v.end();i++){
//    cout<<*i<<" ";
//   }
cout<<"--sort--"<<endl;
   sort(v.begin(),v.end()); //can also be sorted with in specific range
   for(auto i=v.begin();i<v.end();i++){
   cout<<*i<<" ";
  }
  cout<<endl;
  //reverse
  cout<<"--reverse--"<<endl;
  reverse(v.begin(),v.end());
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   if(v.empty()){
    cout<<"vector is not empty"<<endl;
   }else{
    cout<<"vector is empty"<<endl;
   }
//    v.clear();
//     if(v.empty()){
//     cout<<"vector is not empty"<<endl;
//    }else{
//     cout<<"vector is empty"<<endl;
//    }

   auto maxi = max_element(v.begin(),v.end());
   auto mini = min_element(v.begin(),v.end());
   cout<<"Max = "<<*maxi<<" and min = "<<*mini<<endl;
   cout << "distance of " << *maxi << " from begin index is " << distance(v.begin(), mini);  //gives a zero-based index.

   return 0;
}
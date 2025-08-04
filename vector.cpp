#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> v;
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   for(int n:v){
    cout<<n<<" ";
   }
    return 0;
}
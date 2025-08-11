#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> myset;  //   set<int, greater<int>> myset = {10, 20, 30, 40}; for dec ending order
    myset.insert(3);
    myset.insert(4);
    myset.insert(1);
    myset.insert(8);
    myset.insert(15);
    myset.insert(7);
    myset.insert(23);
    for(int e:myset){
        cout<<e<<" ";
    }
    //check empty
    if(myset.empty()){
        cout<<endl<<"set is empty";
    }

    cout<<endl<<*myset.begin()<<endl;
    cout<<*(--myset.end())<<endl; //moving iterator one step back (use --it instead of it-=1;) for no error


    myset.erase(23);
    cout<<endl;
    for(int e:myset){
        cout<<e<<" ";
    }

    if(myset.find(23)!=myset.end()){
        cout<<endl<<"23 is present";
    }else{
        cout<<endl<<"23 is Not present";
    }

    myset.clear();
     if(myset.empty()){
        cout<<endl<<"set is empty";
    }
    return 0;
} 
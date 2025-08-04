#include<iostream>
using namespace std;
int fact(int);

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Factorial of "<<n<<"="<<fact(n)<<endl;
    return 0;
}

int fact(int num) {
    if (num == 1)
        return 1;
    return num * fact(num - 1);
}
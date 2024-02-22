#include<iostream>
using namespace std;
int main(){
    int n=5,fac=1;
    while(n){
        fac*=n;
        n--;
    }
    cout<<fac;
    return 0;
    }
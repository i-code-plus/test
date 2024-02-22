#include<iostream>
using namespace std;
int prime(int n){
    int i=5;
    if(n<=1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    while(i*i<=n){
        if(n%i==0||n%(i+2)==0)
            return false;
        i+=6;
    } 
return true;
}
   
int main(){
    int n=0;
    cout<<prime(n);
    return 0;
    }

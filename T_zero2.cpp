#include<iostream>
using namespace std;
int trailing_zero(int n){
    int cnt=0;
    while(n){
        n/=5;
        cnt+=n;
    }
return cnt;

}
int main(){
    int n=100;
    cout<<trailing_zero(n);
    
    return 0;
    }
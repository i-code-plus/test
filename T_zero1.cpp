#include<iostream>
using namespace std;
long long  fac(long long n){
    long long fac=1;
    while(n)
        fac*=n--;
    return fac;
}
int trailing_zero(long long n){
    long long cnt=0;
    while(n){
        if(n%10!=0)
            break;
        cnt++;
        n/=10;
    }
return cnt;

}
int main(){
    long long n=20;
    cout<<trailing_zero(fac(n));
    
    return 0;
    }
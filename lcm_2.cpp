#include<iostream>
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

int main(){
    int a=5,b=7;
    cout<<a*b/gcd(a,b);
    return 0;
    }

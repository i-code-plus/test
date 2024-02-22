#include<iostream>
using namespace std;
int gcd(int a,int b){
    /* eucliden insted of subtracting we divide*/
    return b==0?a:gcd(b,a%b);
}
int main(){
    int a=36,b=60;
    cout<<gcd(a,b);
    return 0;
    }

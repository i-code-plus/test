#include<iostream>
using namespace std;

void p_factor(int n){
//number naive approch
    int i=3;
    while(n%2==0){
        cout<<"2"<<" ";
        n/=2;
    }
    while(i*i<=n)
        {   while(n%i==0){
            cout<<i<<" ";
            n/=i;
                 }
        i+=2;
        }
    
if(n>2)
    cout<<n;
}
int main(){
    int n=1092;
    p_factor(n);
    return 0;
    }
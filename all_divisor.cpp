#include<iostream>
using namespace std;
void divisor(int n){
//find all divisor of a number
//50-> sare no jo isse divide krte ho mtlb % ==0
    int i=2;
    cout<<1<<",";
    while(i<=n)
    {

    if(n%i==0)
        cout<<i<<",";
        i++;
    }
}

int main(){
    int n=50;
    divisor(n);
    
    return 0;
    }
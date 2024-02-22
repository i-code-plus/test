#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=1567,c=0;
    while(n){
        n/=10;
        c++;
    }
    cout<<c;
    return 0;
    }
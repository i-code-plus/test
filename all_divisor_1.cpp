#include<iostream>
using namespace std;

void divisor(int n){
    //print all divisor
    //n%i->0
    //
   
    int i=1;
    //root n
    while(i*i<=n){

        //check divisor
        if(n%i==0){
            if(n/i==i)
                cout<<i<<",";
            else
                cout<<i<<","<<n/i<<",";
        }
        i++;
    }

}

int main(){
    int n=100;
    divisor(n);
    
    return 0;
    }
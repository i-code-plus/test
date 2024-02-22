#include<iostream>
using namespace std;

void divisor(int n){
    //print all divisor
    //n%i->0
    //
   
    int i=1;
    //root n
    while(i*i<n){

        //check divisor
        if(n%i==0){
            cout<<i<<",";
            }
        i++;
    }
    //if(i-(n/i)==1)
      //  i--;
    while(i>=1)
    {
        if(n%i==0)
            cout<<n/i<<",";
        i--;
    }

}

int main(){
    int n=100;
    divisor(n);
    
    return 0;
    }
//prime factor -> krna hai toh 
//1.n-> number ke factor chye mtlb %i 0 
//i prime hona chye

#include<iostream>
using namespace std;

int prime(int n){
    int i=5;
    if(n<=1)
        return false;
    if( n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    while(i*i<n)
    {
        if(n%i==0 || n%(i+2)==0 )
           return false;
        i+=6;
    } 
return true;
}
void factor(int n){
    int i=2,temp=n;
    while(i<temp)
    {n=temp;
        if(prime(i)==true){
            while(n%i==0)
                {   cout<<i<<" ";
                    n=n/i;
                }
        }
        i++;
    }

}
int main(){
    int n=315;

    factor(n);
    return 0;
    }
#include<iostream>
#include<algorithm>
using namespace std;
void sieve(int n){
//we mark 2, 3 ,5
int isPrime[n];
std::fill_n(isPrime,n,1);
for(int i=2;i*i<n;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<=n;j+=i)
                isPrime[j]=false;
        }
    }
for(int i=2;i<=n;i++)
        {
            if(isPrime[i])
                cout<<i<<",";
        }

}

int main(){
    int n=10;
    sieve(n);
    
    return 0;
    }

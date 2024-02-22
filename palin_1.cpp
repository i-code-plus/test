#include<iostream>
using namespace std;
//function for returning true if palin else false
int palin(int n){
    int temp=n,rev=0;
    while(temp){
        rev=rev*10+temp%10;
        temp/=10;
        }
   return (rev==n);
   //can return like this for bool value
}
int main(){
    int n=12321;
    cout<<palin(n)<<endl;
    cout<<palin(1451);
    
    return 0;
    }

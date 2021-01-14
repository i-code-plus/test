#include <bits/stdc++.h>
using namespace std;
//find the number of digits in a number -iterative method
int countdigit(int n)
{
	int count=0;
	while(n!=0){
		n=n/10;
		++count;
	}
	return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
#endif 
int n;
cin>>n;
n=countdigit(n);      
cout<<n;
}   
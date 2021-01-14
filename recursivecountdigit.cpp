#include <bits/stdc++.h>
using namespace std;
//find the number of digits in a number -iterative method
int countdigit(int n)
{
	if(n==0)
		return 0;
	return 1+countdigit(n/10);
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
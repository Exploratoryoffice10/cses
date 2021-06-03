#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(void){
	fastio
	int n;
	cin>>n;
	if(n==1){
		cout<<1<<endl;
	}
	else if(n<=3){
		cout<<"NO SOLUTION"<<endl;
	}
	else
	{
		if(n%2)
		{
			cout<<n/2+1<<" ";
			for (int i = 1; i <= n/2; ++i)
			{
				cout<<i<<" "<<i+(n+1)/2<<" "; 
			}
		}
		else
		{	
			for (int i = n/2; i >0; --i)
			{
				cout<<i<< " " << i+n/2<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
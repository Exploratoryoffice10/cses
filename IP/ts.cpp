#include <iostream>

using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



int main(int argc, char const *argv[])
{
	fastio;
	ll n,a;
	cin>>n;
	if(n%4==2 || n%4==1){
		cout<<"NO"<<endl;
	}
	else if (n%4==0)
	{
		cout<<"YES"<<endl;
		cout<<n/2<<endl;
		for (int i = 1; i <= n; ++i)
		{
			if(i%4==1 || i%4==0)
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
		cout<<n/2<<endl;
		for (int i = 0; i < n; ++i)
		{
			if(i%4==2 || i%4==3)
			{
				cout<<i<<" ";
			}
		}cout<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
		a=(n-3)/4;
		cout<<(n+1)/2<<endl;
		for (int i = 1; i <= (n+1)/4; ++i)
		{
			cout<<i<<" ";	
		}
		for (int i = 3*a+2; i <n ; ++i)
		{
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<n/2<<endl;
		for (int i = a+2; i <=3*a+1; ++i)
		{
			cout<<i<<" ";
		}
		cout<<n;
		cout<<endl;
	}
	return 0;
}
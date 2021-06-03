#include <iostream>

using namespace std;

#define FOR(i,n) for(int i=0;i<n;i++)
#define FORE(i,a,b) for(int i=a;i<=b;i++)
#define ll long long 
#define ld long double
#define vi vector<int>
#define vs vector<string> 
#define vll vector<long long>
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define piii pair<int,ii>
#define piiii pair<iii,int>
#define pll pair<ll,ll>
#define plll pair<ll,pll>
#define vv vector
#define endl '\n'

int main(int argc, char const *argv[])
{
	ll n,sum,ps,as;
	cin>>n;
	ll arr[n];
	sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];		
		sum+=arr[i];
	}
	as=0;
	for (int i = 0; i < 1<<n; ++i)
	{
		ps=0;
		FOR(j,n)
		{
			if(i>>j&1)	// checks o to n-1 byte
			{
				ps+=arr[j];
			}	
		}
		if(ps<=sum/2)
		{
			as=max(as,ps);
		}
	}
	cout<<sum-2*as<<endl;
	return 0;
}
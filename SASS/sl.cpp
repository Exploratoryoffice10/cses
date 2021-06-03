#include <bits/stdc++.h>

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
const ll rtx=1e10;

int main(int argc, char const *argv[])
{
	ll n,x;
	vll v;
	cin>>n;
	FOR(i,n){
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	ll m,m1;
	if(n!=1)
	{
		if(n%2==1)
		{
			m=v[n/2];
		}	
		else
		{
			m=(v[n/2]+v[n/2-1])/2;
			m1=m+1;
		}
		ll ans=0;
		if(n%2==1)
		{
			FOR(i,n)
			{
				ans+=abs(m-v[i]);
			}
			cout<<ans<<endl;
		}
		else
		{
			FOR(i,n){
				ans+=abs(m-v[i]);	
			}
			ll ans1=0;
			FOR(i,n){
				ans1+=abs(m1-v[i]);	
			}
			ans=min(ans,ans1);
			cout<<ans<<endl;
		}
	}
	else{
		cout<<0<<endl;
	}
	return 0;
}
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
	ll n;
	cin>>n;
	ll arr[n];
	ll co=0;
	FOR(i,n){
		cin>>arr[i];
		if(arr[i]<0){
			co++;
		}
	}
	ll msm=0,ans=0;
	FOR(i,n)
	{
		msm=max(arr[i],msm+arr[i]);	
		ans=max(ans,msm);
	}
	if(co==n)
	{
		ans=arr[0];
		FORE(i,1,n-1){
			ans=max(ans,arr[i]);
		}
	}
	cout<<ans<<endl;
	return 0;
}
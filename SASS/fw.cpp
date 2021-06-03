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


int main(){
	ll n,x;
	cin>>n>>x;
	ll arr[n];
	FOR(i,n){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	ll a,b,ans=0,l=0;
	a=0;b=n-1;	// l is left out students.
	while(a<b)
	{
		while(a<b && arr[a]+arr[b]>x)
		{
			b--;l++;
		}
		if(a!=b)
		{
			if(arr[a]+arr[b]<=x)
			{
				ans++;a++;b--;
			}
		}
		if(a==b)
		{
			l++;
			break;
		}
	}
	ans+=l;
	cout<<ans<<endl;
	return 0;
}
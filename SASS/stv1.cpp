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
	ll n,x,y;
	cin>>n>>x;
	std::vector<pii> v;
	map<ll,ll> mp;
	FOR(i,n)
	{
		cin>>y;
		v.pb(make_pair(y,i+1));
	}
	sort(v.begin(), v.end());
	ll a,b;
	pii pp;
	pp.first=-1;pp.second=-1;
	a=0;b=n-1;
	while(a<b)
	{
		if(v[a].first+v[b].first==x)
		{
			pp.first=v[a].second;pp.second=v[b].second;
			break;
		}
		else if(v[a].first+v[b].first<x){
			a++;
		}
		else
		{
			b--;
		}
	}
	if(pp.first==-1){
		cout<<"IMPOSSIBLE";
	}
	else{
		if (pp.first>pp.second)
		{
			cout<<pp.second<<" "<<pp.first;
		}
		else{
			cout<<pp.first<<" "<<pp.second;	
		}
	}
	cout<<endl;
	return 0;
}
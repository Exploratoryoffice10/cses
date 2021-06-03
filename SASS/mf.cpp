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

bool sortbysec(pair<int,int> a,pair<int,int> b) 
{ 
    return (a.second < b.second); 
} 

int main(int argc, char const *argv[])
{
	vector<pii> v;	
	int n,x,y;
	cin>>n;
	FOR(i,n)
	{
		cin>>x>>y;
		v.pb(make_pair(x,y));
	}
	sort(v.begin(),v.end(),sortbysec);
	int ans=0,a=0,b=0;
	while(1){
		ans++;
		b=a+1;		// a is index of current movie watching
		while(b<n)
		{
			if(v[a].second<=v[b].first)	// must be >= old finish time
			{
				a=b;break;
			}
			b++;
		}
		if(b==n)
		{
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}

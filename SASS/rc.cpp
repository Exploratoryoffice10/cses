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
	int n,x,y;
	vi va,vt;
	cin>>n;
	FOR(i,n)
	{
		cin>>x>>y;
		va.pb(x);
		vt.pb(y);
	}
	
	sort(va.begin(), va.end());
	sort(vt.begin(), vt.end());
	int a=0,b=0,ans=0,c=0;
	while(a!=n){
		if(va[a]<vt[b]){
			a++;c++;
			ans=max(c,ans);
		}
		else
		{
			c--;b++;
		}

	}
	cout<<ans<<endl;
	return 0;
}
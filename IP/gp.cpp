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

string s;
ll ans=0,n=8;
int vis[7][7]={0};


void dfs(int i,int j,int nm=0)	// nm is number of moves made
{
	vis[i][j]=1;	
	if(i==6 && j==6)
	{
		if(nm==48)
		{
			ans++;
		}
		return;
	}		
	if(s[nm]=='?' || s[nm]=='R')
	{
		if(j<6 && !vis[i][j+1])
		{
			dfs(i,j+1,nm+1);
		}
	}
	
	if(s[nm]=='?' || s[nm]=='L'){
		if(j && !vis[i][j-1])
		{
			dfs(i,j-1,nm+1);
		}
	}
	
	if(s[nm]=='?' || s[nm]=='U')
	{
		if(i && !vis[i-1][j])
		{
			dfs(i-1,j,nm+1);
		}
	}
	
	if(s[nm]=='?' || s[nm]=='D'){
		if(i<6 && !vis[i+1][j])
		{
			dfs(i+1,j,nm+1);
		}
	}

	vis[i][j]=0;
	return;
}



int  main(int argc, char const *argv[])
{
	cin>>s;
	dfs(0,0);
	cout<<ans<<endl; 
	return 0;
}
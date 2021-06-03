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
	int n;
	cin>>n;
	map<int,int> mp;
	int arr[n];
	FOR(i,n){
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0,j=0;i<n;i++){
		while(j<n && mp[arr[j]]<1)
		{
			mp[arr[j]]++;
			j++;
		}
		ans=max(ans,j-i);
		mp[arr[i]]--;
	}
	cout<<ans<<endl;
	return 0;
}
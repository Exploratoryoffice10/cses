#include <iostream>
#include <algorithm>

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
	int n,ans=1;
	cin>>n; int arr[n];
	FOR(i,n){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	FOR(i,n-1){
		if(arr[i]!=arr[i+1]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
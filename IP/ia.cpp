#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(void)
{
	fastio;
	ll n;cin>>n;
	ll arr[n],ans=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 1; i < n; ++i)
	{
		if(arr[i-1]>arr[i]){
			ans+=(arr[i-1]-arr[i]);
			arr[i]=arr[i-1];
		}
	}
	cout<<ans<<endl;
	return 0;
}
/*
	NAME: WEIRD ALGORITHM
*/

#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(void)
{
	fastio;
	ll n,x;
	cin>>n;
	ll arr[n];
	x=n;
	for (int i = 0; i < (n-1); ++i)
	{
		cin>>arr[i];
		x^=(i+1);
	}
	for(int i=0;i<n-1;++i){
		x^=arr[i];
	}
	cout<<x<<endl;
	return 0;
}
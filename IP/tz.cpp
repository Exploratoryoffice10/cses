#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define ll long long

int main(int argc, char const *argv[])
{
	fastio;
	ll n;
	cin>>n;
	ll ans=0;
	while(n>0)
	{
		ans+=(n/5);
		n=n/5;
	}
	cout<<ans<<"\n";
	return 0;
}
#include <iostream>

using namespace std;


#define ll long long
const ll mod=1e9+7;


int main(){
	ll n;
	cin>>n;
	ll ans=1,a=2;
	while(n>0)
	{
		if(n%2==1)
		{
			ans=(ans*a)%mod;
		}
		a=(a*a)%mod;
		n=n/2;
	}

	cout<<ans<<endl;
	return 0;
}
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
	ll n;
	cin>>n;
	while(n!=1)
	{
		cout<<n<<" ";
		if(n%2)
		{
			n=3*n+1;
		}
		else
		{
			n/=2;
		}
	}
	cout<<n<<endl;
	return 0;
}
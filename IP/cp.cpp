#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define ll long long

int main(int argc, char const *argv[])
{
	fastio;
	ll n,a,b,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(2*a<b || 2*b<a){
			cout<<"NO"<<endl;
		}
		else
		{
			if((2*a-b)%3==0 && (2*b-a)%3==0){
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
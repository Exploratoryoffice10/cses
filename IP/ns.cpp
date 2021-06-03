#include <iostream>
#include <algorithm>

using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
	ll t,z,y,ans,a;
	cin>>t;
	while(t--)
	{		
		cin>>y>>z;	// yth row and zth column
		a=max(y,z);
		if(a%2)
		{
			ans=(a-1)*(a-1);
			if(y>=z)
			{
				ans+=z;
			}	
			else
			{
				ans=(a*a+1-y);
			}
		}
		else
		{
			ans=(a-1)*(a-1);
			if(z>=y){
				ans+=y;
			}
			else{
				ans=a*a+1-z;
			}
		}
		cout<<ans<<"\n";
	}	
	return 0;
}
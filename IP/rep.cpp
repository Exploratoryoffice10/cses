#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main(){
	string s;
	ll x=1,ans=1;
	cin>>s;
	for (int i = 1; i < s.size(); ++i)
	{
		if(s[i-1]!=s[i]){
			x=1;
			ans=max(x,ans);
		}
		else{
			x++;
			ans=max(x,ans);
		}
	}
	cout<<ans<<endl;
	return 0;
}
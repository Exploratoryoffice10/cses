#include <iostream>

using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


ll fun(ll x){
	if(x==1){
		return 0;
	}
	if(x==2){
		return 6;
	}
	if(x==3){
		return 28;
	}
	return (x*x*(x*x-1))/2-(x-2)*(x-4)*4-2*(x-2)*3-(x-2)*2*2-(x-4)*2-4;
	//      nc2-
}


int main(int argc, char const *argv[])
{
	fastio;
	ll n;
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		cout<<fun(i)<<endl;
	}
	return 0;
}
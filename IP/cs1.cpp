#include <iostream>
#include <algorithm> 	
#include <vector>
#include <string>

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
	string s;
	cin>>s;	 	
	sort(s.begin(),s.end());
	ll a=0;
	vs ans;
	ans.clear();
	do{
		a++;
		ans.pb(s);
	}while(next_permutation(s.begin(),s.end()));
	// checks them in lexicographic order
	cout<<a<<endl;
 	for(auto x:ans){
 		cout<<x<<endl;
 	}
	
 	return 0;
 } 
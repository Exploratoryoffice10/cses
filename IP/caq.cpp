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
	char chk[8][8];
	bool aa;
	FOR(i,8){
		FOR(j,8)
		cin>>chk[i][j];
	}
	int p[8];
	FOR(i,8){
		p[i]=i;
	}
	int ans=0,cc=0;
	do
	{
		aa=true;
		FOR(i,8)
		{
			aa&=(chk[i][p[i]]=='.');
		}
		if(aa)
		{
			FOR(i,7)	// for first 7 queens
			{
				cc=i+1;
				FORE(j,p[i]+1,7)	// checking right
				{
					if(p[cc]==j){
						aa=false;
						break;
					}
					cc++;
					if(!aa) break;
				}
				
				FOR(i,7)
				{	
					cc=i+1;
					for(int j=p[i]-1;j>=0;--j)
					{
						if(p[cc]==j)
						{
							aa=false;
							break;	
						}
						cc++;
					}
					if(!aa) break;
				}
			}
		}
		if(aa) 
			ans++;
	}while(next_permutation(p,p+8));
	cout<<ans<<endl;
	return 0;
}
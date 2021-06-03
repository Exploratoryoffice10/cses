#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define ll long long

int main(int argc, char const *argv[])
{
	ll a;
	string s;
	map<char,ll> mp;
	cin>>s;
	a=0;
	char xx='0';
	for (int i = 0; i < s.size(); ++i)
	{
		mp[s[i]]=0;
	}
	for (int i = 0; i < s.size(); ++i)
	{
		mp[s[i]]+=1;
	}

	for (auto x:mp)
	{
		if(x.second%2==1)
		{
			a++;
			a=x.first;
		}
	}
	cout<<a<<"is a"<<endl;
	if(a>1)
	{
		cout<<"NO SOLUTION";
	}
	else{
		if(a==0)
		{
			for(auto x=mp.begin();x!=mp.end();++x)
			{
				for(int i=0;i<x->second/2;++i)
				{
					cout<<x->first;	
				}
			}
			for(auto x=mp.rbegin();x!=mp.rend();++x)
			{
				for(int i=0;i<x->second/2;++i)
				{
					cout<<x->first;	
				}
			}
		}
		else{
			for(auto x=mp.begin();x!=mp.end();++x)
			{
				for(int i=0;i<x->second/2;++i)
				{
					cout<<x->first;	
				}
			}
			for (int i = 0; i <mp[xx]; ++i)
			{
				cout<<xx;
			}
			for(auto x=mp.rbegin();x!=mp.rend();++x)
			{
				for(int i=0;i<x->second/2;++i)
				{
					cout<<x->first;	
				}
			}	
		}
	}
	cout<<endl;
	return 0;
}
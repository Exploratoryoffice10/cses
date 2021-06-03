#include <bits/stdc++.h>

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
const ll rtx=1e10;

vis[(int)2e5+1]={};

void fun();


int main(){
	ll n,m;
	cin>>n>>m;
	ll arr1[n],arr2[m];
	ll arr3[n];
	FOR(i,n){
		cin>>arr1[i];
		//arr3[i]=arr3[i];
	}
	FOR(i,m){
		cin>>arr2[i];
	}
	sort(arr1,arr1+n);
	// for each price find the element which is smaller than tk
	FOR(i,n){
		fun();
	}



	return 0;
}
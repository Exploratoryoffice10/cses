// DICE COMBINATIONS


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
const ll rtx=1e9+7;
 
ll dp[(int)1e6+2]; 
 
ll fun(int n){
    ll ans = 0;
    if(n<=0) return 0;
    if(dp[n]>0){
        return dp[n];
    }
    if(n<=6){
        ans++;
    }
    FORE(i,1,min(n,6)){
        ans = (ans + fun(n-i))%rtx;
    }
    dp[n] = ans;
    return ans;
}
 
 
int main(){
    int n;cin>>n;
    // dp[1] = 1;
    // dp[2] = 2;
    // dp[3] = 4;
    // dp[4] = 8;
 
    cout << fun(n) << endl; 
}
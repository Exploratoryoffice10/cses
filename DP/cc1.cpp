// COIN COMBINATIONS 1

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
 
const ll rtx=1e9+7,inf = 1e15 + 9;
 
ll dp[(int)1e6+2];
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    FOR(i,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    dp[0] = 1;
    FORE(i,1,x){
        for(auto y:v){
            if(i>=y){
                dp[i] = (dp[i] + dp[i-y])%rtx;
            }else{
                break;
            }
        }
    }
    cout << dp[x] << endl;
    return 0;
}
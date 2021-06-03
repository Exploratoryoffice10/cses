#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	map<int, int> mp;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		mp[x] = i;
	}
	int ans = 1;
	for(int i=1;i<n;i++){
		ans += (mp[i] > mp[i+1]);
	}
	cout << ans << endl;
	return 0;
}

#include <iostream>
#include <algorithm>
#include <set>
#include <utility>

using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,p;
    cin>>n>>m;
    set< pair< int,int > > tp;
    for(int i=0;i<n;i++){
        cin>>p;
        tp.insert(make_pair(p,i));
    }
    for(int i=0;i<m;i++)
    {
        cin>>p;
        auto x = tp.upper_bound(make_pair(p,(int)1e9+1));
        if(x==tp.begin())
        {
            cout<< -1 <<endl;
        }
        else
        {
            x--;
            cout<< (*x).first <<endl;
            tp.erase(x);
        }
    }
    return 0;
}
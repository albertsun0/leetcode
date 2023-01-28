#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <limits.h>
#include <stack>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n,m;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.pb(a);
    }
    
    map<ll, ll> mp;
    ll prefix = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        prefix+=v[i];
        mp[prefix]++;
        if(prefix == m && mp.find(0) == mp.end()){
            ans++;
        }
        if(mp.find(prefix - m) != mp.end()){
            ans += mp[prefix];
        }
    }

    cout << ans; 
    
    return 0;
}
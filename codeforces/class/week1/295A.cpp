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
    int n, m, k; cin >> n >> m >> k;
    vector<ll> v;
    for(int i =0 ; i < n; i++){
        int a; cin >> a;
        v.pb(a);
    }

    vector<vector<int>> o;
    for(int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        o.pb({a,b,c});
    }

    vector<int> t(m+1,0);
    for(int i = 0; i < k; i++){
        int a, b; cin >> a >> b;
        a--;
        t[a]++;
        t[b]--;
    }
    
    vector<ll> sum;
    ll count = 0;
    for(int i = 0; i < m; i++){
        count += t[i];
        sum.pb(count);
    }

    // for(auto i: sum){
    //     cout << i << " ";
    // }
    vector<ll> diff(n+1,0);
    for(int i = 0; i < m; i++){
        ll l = o[i][0] -1;
        ll r = o[i][1];
        ll v = o[i][2];
        diff[l] += v * sum[i];
        diff[r] -= v * sum[i];
    }

    count = 0;
    
    for(int i = 0; i < v.size(); i++){
        count += diff[i];
        v[i] += count;
    }

    for(auto i : v){
        cout << i << " ";
    }
       
    return 0;
}
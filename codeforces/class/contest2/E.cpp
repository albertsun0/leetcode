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
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include <limits.h>
#include <cmath>
#include <stack>

int main () {
    fio;
    ll n, m; cin >> n >> m;

    vector<ll> v;
    vector<ll> prefix;
    ll total = 0;
    for(ll i = 0 ; i < n; i++){
        ll a; cin >> a;
        v.pb(a);
        total+= a;
        prefix.pb(total);
    }

    for(ll i = 0; i < m; i++){
        ll t; cin >> t;
        //cout << t << "\n";
        map<ll, ll> m;
        m[0] = -1;
        vector<pair<ll, pair<ll,ll>>> result;
        bool found = false;
        for(ll a = 0; a < prefix.size(); a++){
            if(v[a] == t){
                cout << a << " " << a << "\n";
                found = true;
                break;
            }
            m[prefix[a]] = a;
            if(m.find(prefix[a] - t) != m.end()){
                cout << "start = " << m[prefix[a] - t];
                cout << " end = " << a;
                cout << " val = " << t;
                cout << "\n";
                ll start = m[prefix[a] - t] + 1;
                result.pb({a - start, {start, a}});
            }
        }
        if(!found){
            ll minv = LLONG_MAX;
            ll mins = 0;
            ll mine = 0;
            for(ll a = 0; a < result.size(); a++){
                if(result[a].first < minv){
                    mins =  result[a].second.first;
                    mine = result[a].second.second;
                }
            }
            cout << mins << " " <<  mine << "\n";
        }
    }
    return 0;
}

/*

6 1
1 2 3 4 5 6
1


*/
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



int main () {
    fio;
    int n; cin >> n;
    vector<ll> v;
    ll total = 0;
    for(int i = 0; i < n ; i++){
        ll a; cin >> a;
        v.pb(a);
        total += a;
    }
    vector<ll> dp (total+1, 0);
    dp[0] = 1;  

    for(ll i = 0; i < n; i++){
        ll val = v[i];
        for(ll j = dp.size() - 1; j >= val; j--){
            if(dp[j - val] > 0){
                dp[j] += 1;
            }
        }
    }

    ll ans = INT_MAX;
    
    for(ll i = 1; i < dp.size(); i++){
        if(dp[i] > 0){
            ans = min(ans, abs((total - i) - i));
        }
    }
    cout << ans;

    return 0;
}


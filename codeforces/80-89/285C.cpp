#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    vector<ll> v;

    for(int i =0 ; i < n; i++){
        ll a; cin >> a;
        v.pb(a);
    }

    sort(v.begin(), v.end());

    ll ans = 0;

    for(ll i = 1; i <=n; i++){
        ans += abs(i - v[i-1]);
    }

    cout << ans;
    return 0;
}
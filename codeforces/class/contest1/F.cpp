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

ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

vector<ll> factors(ll n) {
    vector<ll> f;
    for (ll x = 2; x*x <= n; x++) {
        while (n%x == 0) {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1) f.push_back(n);
    return f;
}

int main () {
    fio;
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        ll d = gcd(a, b);
        vector<ll> v = factors(d);
        map<ll,ll> m;
        for(int i =0 ; i< v.size(); i++){
            m[v[i]]++;
        }
        for(auto i :m){
            cout << i.first << " " << i.second << "\n";
        }

        cout << "0" << "\n";
    }
}
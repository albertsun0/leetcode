#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void sol(int id) {
    ll n;
    cin >> n;
    vector<ll> f;
    int ans = 0; 
    for(ll i = 1; i*i <=n; i++){
        if (n%i == 0){
            f.pb(i);
            if(i*i < n){ //only factor where duplicated are added would be sqrt
                f.pb(n/i);
            }
        }
    }
    for(int i = 0; i<f.size(); i++){
        string s = to_string(f[i]);
        int l = 0;
        int r = s.size()-1;
        bool p = true;
        while(l < r){
            if(s[l] != s[r]){p = false; break;}
            l++;
            r--;
        }
        if(p) ans++;
    }
    cout << "CASE #" << id << ": " << ans << "\n";
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        sol(i+1);
    }
    return 0;
}
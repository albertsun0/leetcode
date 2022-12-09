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
    
    map<ll,int> m;
    int n; cin >> n;
    int mx = 0;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        m[a]++;
        mx = max(mx,a);
    }

    vector<ll> dp(mx+1,0);

    dp[0] = 0;
    dp[1] = m[1];

    for(ll i = 2; i <= mx; i++){
        if(m.find(i) != m.end()){
            dp[i] = max(dp[i-2] + m[i] * i, dp[i-1]);
        }
        else{
            dp[i] = dp[i-1];
        }
    }

    // for(auto i: dp){
    //     cout << i << " ";
    // }
    cout << dp[mx];
    
    return 0;
}
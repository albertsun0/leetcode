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
    int n,m; cin >> n >> m;
    int mod = 1e9+7;
    vector<int> coins(n,0);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    vector<ll> dp(m+1, 0);
    dp[0] = 1;

    for(auto c : coins){
        for(int i = 0; i <= m; i++){
            if(i - c >= 0 && dp[i-c] > 0){
                dp[i] += dp[i-c] % mod;
            }
        }
    }
    cout << dp[m] % mod;
    return 0;
}

//1 2 4 8 16 

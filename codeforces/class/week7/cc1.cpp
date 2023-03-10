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

int mod = 1e9+7;

int main () {
    fio;
    int n, m; cin >> n >> m;

    vector<int> coins;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        coins.pb(a);
    }

    vector<ll> dp (m+1, 0);
    dp[0] = 1;

    // for(auto c: coins){
    //     for(int i = 0; i < dp.size(); i++){
    //         if(dp[i] > 0 && i + c < dp.size()){
    //             dp[i + c] += dp[i];
    //         }
    //     }
    // }

    for(int i = 0; i < dp.size(); i++){
        dp[i] %= mod;
        for(auto c: coins){
            if(i + c < dp.size()){
                dp[i + c] += dp[i];
            }
        }
    }
    
    // for(auto i: dp){
    //     cout << i << " ";
    // }
    cout << dp[m] % mod;

    /*
        1 2 3 4 5 6 7 8 9
    2   0 1 0 1 0 1 0 1 0
    3   0 1 1 1 1 2 1 2 2
    4
    
    */

    return 0;
}


/*

0123
 1


*/
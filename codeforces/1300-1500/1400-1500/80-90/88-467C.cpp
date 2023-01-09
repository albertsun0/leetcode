#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    
    int n,m,k; cin >> n >> m >> k;

    vector<ll> sums;
    vector<ll> nums;
    sums.pb(0);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        nums.pb(a);
        if(i < m-1){
            sum += a;
        }
        else{
            sum += a;
            sums.pb(sum);
            sum -= nums[i-m+1];
        }
    }

    // for(auto i: sums){
    //     cout << i << " ";
    // }

    vector<vector<ll>> dp (k, vector<ll>(sums.size(), 0));

    //dp(p, i) == p = number of moves, i = using all preivous pairs
    for(int p = 0; p < k; p++){ //p = which pair
        for(int i = 1; i < sums.size(); i++){
            if(p == 0){
                dp[p][i] = max(dp[p][i-1], sums[i]);
            }
            else{
                if(i < m){
                    dp[p][i] = dp[p-1][i];
                }
                else{
                    dp[p][i] = max(dp[p-1][i-m] + sums[i], dp[p][i-1]);
                }
            }
        }
    }

    // for(auto a: dp){
    //     for(int i: a){
    //         cout << i << " ";
    //     }
    //     cout << "\n";
    // }
    
    cout << dp[k-1][sums.size()-1];
    return 0;
  
}
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
    int mod = 1e9+7;
    fio;
    string s; cin >> s;

    vector<ll> dp (s.length()+1, 0);
    dp[s.length() - 1] = 1;
    dp[s.length()] = 1;
    for(int i = s.length()-2; i >= 0; i--){
        if(s[i] == 'C' && s[i+1] == 'C'){
            dp[i] = dp[i+2] + dp[i+1];
        }
        else if(s[i] == 'T' && s[i+1] == 'C'){
            dp[i] = dp[i+2] + dp[i+1];
        }
        else{
            dp[i] = dp[i+1];
        }
        dp[i] %= mod;
    }

    //T C C
    //0 0 0
    //0 0 1
    //0 2 1
    //
    
    /* TCCTCTT

    
    */

    // for(auto i : dp){
    //     cout << i << " ";
    // }
    cout << dp[0] % mod;
}
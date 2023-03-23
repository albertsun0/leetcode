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

int MOD = 1000000007;
ll fastexp(ll b, ll e){
    if(e == 1){
        return b;
    }
    ll ans = fastexp((b * b) % MOD, e/2);
    if(e % 2 == 1){
        ans *= b;
    }
    return ans % MOD;
}

int main () {
    fio;
    int n; cin >> n;
    int e; cin >> e;
    
    cout << fastexp(n,e);
    
    return 0;
}

/*

The problem is that even if dp[i + 1][l] == -1, which means that the previous value was not attainable, we still run the code to set the current value based on that previous value. This leads to the possibility of cost being -1, and dp[i][k] being incorrectly set to -1 because of the min function. To fix this, we can just skip processing in the very inner loop if dp[i + 1][l] == -1. 

.

.

.

for (int l = 0; l < 2; l++) {
    if(dp[i + 1][l] == -1) continue;
    String cur = k > 0 ? reversed[i] : words[i];
.
.
.

*/
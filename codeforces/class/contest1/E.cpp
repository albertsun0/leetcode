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
    int n; cin >> n;
    vector<vector<int>> v;
    for(int a = 0; a < 3; a++){
        vector<int> temp;
        for(int i =0; i < n; i++){
            int e; cin >> e;
            temp.pb(e);
        }
        v.pb(temp);
    }

    vector<int> dp(n+1, 0);
    dp[0] = 0;
    dp[1] = max(v[0][0], max(v[1][0], v[2][0]));
    
    for(int i = 2; i < n+1; i++){
        dp[i] = max({dp[i-2] + v[0][i-1], dp[i-2] + v[1][i-1], dp[i-2] + v[2][i-1], dp[i-1]});
    }
    // for(auto i : dp){
    //     cout << i << " ";
    // }
    cout << dp[n];
    
}
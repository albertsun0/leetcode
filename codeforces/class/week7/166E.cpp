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
    int n; cin >> n;

    vector<vector<int>> dp(4, vector<int>(n+1, 0));
    
    dp[0][0] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                if(j != k){
                    dp[k][i+1] += dp[j][i];
                    dp[k][i+1] %= mod;
                }
            }
        }
    }
    
    cout << dp[0][n];
    // for(auto i: dp){
    //     cout << i << " ";
    // }

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
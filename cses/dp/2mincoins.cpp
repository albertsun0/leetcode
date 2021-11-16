#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; int m; cin >> n; cin >> m;
    int dp [n+1][m+1];
    int vals [n];
    for(int i = 0; i< n; i++){
        cin >> vals[i];
    }

    for(int i = 0; i< n+1; i++){
        for(int j = 0; j< m+1; j++){
            dp[i][j] = 0;
        }
    }

    for(int coin = 1; coin < n+1; coin++){
        for(int val = 0; val < m+1; val++){
            int w = vals[coin-1];
            if(val < w){
                //cout << "less" << val;
                dp[coin][val] = dp[coin-1][val];
            }
            if(val + w <= m){
                if(dp[coin-1][val] == 0){
                    if(val % w == 0)
                         dp[coin][val+w] = dp[coin][val] + 1;
                }
                else{
                    dp[coin][val+w] = min(dp[coin][val]+1, dp[coin-1][val+w]);
                }
            }
            
        }
    }

    // for(int i = 0; i< n+1; i++){
    //     for(int j = 0; j< m+1; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    if(dp[n][m] == 0){dp[n][m] = -1;}
    cout << dp[n][m];

    return 0;
}
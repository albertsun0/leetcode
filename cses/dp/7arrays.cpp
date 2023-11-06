#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include <map>
#include <limits.h>

int main () {
    fio;
    int n,m; cin >> n >> m;
    vector<int> v (n, 0);
    for(int i = 0 ; i  < n; i++){
        cin >> v[i];
    }
    vector<int> dp (n + 1, INT_MAX);
    dp[n] = 0;

    for(int i  = n; i >= 0; i--){
        if(dp[i] != INT_MAX){
            string s = to_string(i);
            for(auto c: s){
                int digit = c - '0';
                if(i - digit >= 0){
                    dp[i - digit] = min(dp[i-digit], dp[i] + 1);
                }
            }
        }
    }
    cout << dp[0];

    return 0;
}


// 5 0 0 0 5
// 5 4 4 4 5
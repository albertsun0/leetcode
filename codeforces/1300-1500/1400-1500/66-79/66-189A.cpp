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
    
    int n; cin >> n;

    vector<int> r;

    for(int i = 0; i < 3; i++){
        int a; cin >> a;
        r.pb(a);
    }

    vector<int> dp (n+1, 0);

    for(int i = 0; i < 3; i++){
        int cur = r[i];
        if(cur > n){
            continue;
        }
        dp[cur] = 1;
        for(int j = cur+1; j <= n; j++){
            if(dp[j-cur] > 0){
                dp[j] = max(dp[j], dp[j-cur] + 1);
            }
        }
    }

    // for(auto i: dp){
    //     cout << i << " ";
    // }

    cout << dp[n];

    return 0;
}
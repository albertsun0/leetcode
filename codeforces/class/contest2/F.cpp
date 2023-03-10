
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
#include <cmath>
#include <unordered_map>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int factors(int n, unordered_map<int,int> & dp) {
    int ans = 0;
    int s = n;
    for (int x = 2; x*x <= n; x++) {
        if(dp.find(n) != dp.end()){
            return ans + dp[n];
        }
        while (n%x == 0) {
            if(dp.find(n) != dp.end()){
                return ans + dp[n];
            }
            ans++;
            n /= x;
            dp[s/n] = ans;
        }
        dp[s/n] = ans;
    }
    if (n > 1) ans++;
    return ans;
}

int main () {
    fio;
    int n; int m;
    cin >> n;
    ll ans = 0;
    unordered_map<int,int> dp2;
    unordered_map<int,int> dp;
    for(int i = 1; i <= n; i++){
        int t = i;
        int count = 0;
        while( t > 1){
            if(dp2.find(t) != dp2.end()){
                count += dp2[t];
                break;
            }
            count++;
            if(dp.find(t) != dp.end()){
                t -= dp[t];
            }
            else{
                int temp = factors(t, dp);
                dp[t] = temp;
                t -= temp;
            }
        }
        dp2[i] = count; 
        ans+= count;
    }
    
    cout << ans;
    
    
    return 0;
}


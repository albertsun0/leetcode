#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int sol(int n){
    ll dp[n+1];
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 2;
    for(int i = 2; i<=n; i++){
        dp[i] = 2 * dp[i-2];
    }
    return dp[n];
}

int main () {
    fio;
    int n; cin >> n;
    cout << sol(n) << "\n";
    // for(int i = 0; i< n; i++){
    //     cout << sol() << "\n";
    // }
    return 0;
}

//state - what information you are storing answer for
//transition - f(n) = f(n-1) + f(n-2)
//base case - f(0) = 0, f(1) = 1
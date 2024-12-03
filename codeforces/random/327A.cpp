#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    int mx = 0;
    int sum = 0;
    int x; cin>>x;
    for(int i = 1; i<n; i++){
        int c; cin >> c;
        if(c == 0){
            dp[i] = dp[i-1]+1;
        }
        else{
            dp[i] = max(dp[i-1], 1);
        }
        mx = max(dp[i], mx);
    }
    return 0;
}
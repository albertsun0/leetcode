#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <limits.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    vector<int> v;
    map<int,int> m;

    int mx = 0;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mx = max(mx,a);
        v.pb(a);
        m[a]++;
    }

    vector<int> dp (mx+1,0);

    dp [0] = 0;
    dp [1] = m[1];

    for(int i = 2; i <= mx; i++){
        if(m.find(i) != m.end()){
            dp[i] = max(dp[i-2] + m[i], dp[i-1]);
        }
        else{
            dp[i] = dp[i-1];
        }
    }
    
    return 0;
}
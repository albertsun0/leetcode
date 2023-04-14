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

int main () {
    fio;
    int n,m; cin >> n >> m;

    /*
    x
    
    xxxx
    xxxx
    xxxx

    xx
    xx
    */

    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
    dp[1][1] = 1;

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            
        }
    }

    return 0;
}

//1 2 4 8 16 

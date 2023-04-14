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
    int n; cin >> n;
    vector<char>v (n,0); 
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<vector<int>> dp(2, vector<int> (n,0));
    //0 = no indent, 1 = indent
    dp[0][0] = 1;
    for(int i = 0; i < v.size() - 1; i++){
        for(int j = 0; j < 2; j++){
            if(dp[j][i] == 0){
                continue;
            }
            if(v[i] == 'f'){
                if(v[i+1] == 'f'){
                    dp[1][i+1] += dp[j][i];
                }
                else{
                    //if indented already then +1, else + 0
                    //how to know if indented already?
                    dp[i] = dp[i-1] + 1;
                }
            }
            if(v[i] == 's'){
                dp[i] = dp[i-1];
            }
        }
    }

    for(auto i: dp){
        for(auto v: i){
            cout << v << " ";
        }
        cout << "\n";
    }

    return 0;
}

//1 2 4 8 16 

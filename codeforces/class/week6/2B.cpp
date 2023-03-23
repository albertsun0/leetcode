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
    vector<vector<int>> matrix(n, vector<int>(n,0));
    vector<vector<vector<int>>> dp (n+1, vector<vector<int>>(n+1, vector<int>(4, 0)));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    map<int,int> five;
    map<int, int> two;
    int count = 1;
    for(int i = 2; i < 1e9+1; i*= 2){
        two[i] = count;
        count ++;
    }

    count = 1;
    for(int i = 5; i < 1e9+1; i*= 5){
        five[i] = count;
        count ++;
    }

    //dp[val, two, five]
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int val = matrix[i-1][j-1];
            int t = 0;
            int f = 0;
            while(val % 2 == 0){
                val/=2;
                t++;
            }
            while(val % 5 == 0){
                val/=5;
                f++;
            }
            // int lt = dp[i-1][j][1];
            // int lf = dp[i-1][j][2];

            // int tt = dp[i][j-1][1];
            // int tf = dp[i][j-1][2];

            // int leftVal = dp[i-1][j][3] ? 1 : min(t + dp[i-1][j][1], f + dp[i-1][j][2]);
            // int rightVal 
            if(min(t + dp[i-1][j][1], f + dp[i-1][j][2]) <=
                min(t + dp[i][j-1][1], f + dp[i][j-1][2])
            ){
                //-1 = right
                // 1 = down
                dp[i][j][0] = 1;
                dp[i][j][1] = t + dp[i-1][j][1];
                dp[i][j][2] = f + dp[i-1][j][2];
            }
            else{
                dp[i][j][0] = -1;
                dp[i][j][1] = t + dp[i][j-1][1];
                dp[i][j][2] = f + dp[i][j-1][2];
            }
        }
    }

    string s = "";

    int r = n;
    int c = n;

    while(r != 1 || c != 1){
        if(r == 1){
            s += "R";
            c--;
            continue;
        }
        else if(c == 1){
            s += "D";
            r--;
        }
        if(dp[r][c][0] == -1){
            s += "R";
            c--;
        }
        else{
            s += "D";
            r--;
        }
    }
    cout << min(dp[n][n][1], dp[n][n][2]);
    cout << "\n";
    for(int i = s.length() - 1; i >=0; i--){
        cout << s[i];
    }
   
    
    return 0;
}


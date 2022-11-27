#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define pb push_back
#define ll long long
#include <climits>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//bellmand ford is used for shortest distance in direced cyclical graphs

int main () {
    //edges - start, end, weight
    int startNode = 0;
    int endNode = 2;
    vector<vector<int>> edges = {
        {0,1,3},
        {0,2,1},
        {1,2,1},
        {2,0,1}
    };

    map<int, vector<pair<int,int>>> adj;

    for(int i = 0; i<edges.size(); i++){
        adj[edges[i][1]].pb({edges[i][0], edges[i][2]});
    }
    int n = adj.size();
    vector<vector<int>> dp (n, vector<int>(n, INT_MAX));

    dp[0][startNode] = 0;
    for(int i = 1; i<n; i++){
        // if(dp[i-1][endNode] != INT_MAX){
        //     break;
        // }
        for(int j = 0; j<n; j++){
            int minVal = INT_MAX;
            for(auto e:adj[j]){
                int node = e.first;
                int weight = e.second;
                if(dp[i-1][node] < INT_MAX){
                    minVal = min(minVal, dp[i-1][node] + weight);
                }
            }
            dp[i][j] = minVal;
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j < n; j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }

    cout << dp[n-1][endNode];
    //


    return 0;
}

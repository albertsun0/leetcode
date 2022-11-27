#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    int l = INT_MAX;
    int r = INT_MIN;

    vector<pair<int,int>> segments;
    for(int i =0 ; i < n; i++){
        int a, b;
        cin >> a >> b;
        l = min(l, a);
        r = max(r, b);
        segments.push_back({a,b});
    }
    //cout << l << " " << r << "\n";
    for(int i = 0; i < n; i++){
        if(segments[i].first == l && segments[i].second == r){
            cout << i+1;
            return 0;
        }
    }
    cout << "-1";
    
    return 0;

}
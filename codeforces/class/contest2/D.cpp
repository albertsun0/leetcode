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
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n, m;
    cin >> n >> m;

    ll cost = m * (m+1)/2;
    //cout << "cost" << cost << "\n";
    int ans = 0;

    ll cur = 0;

    for(int i = 0; i < n; i++){
        int a; cin >> a; 
        cur += a;
        if (cur > cost){
            ans++;
            cur = 0;
            //sum of numbers from ans * m to ans * m + m
            ll start = m * ans;
            ll end = start + m;
            cost = (end * (end + 1) / 2) - (start * (start + 1) /2);
            //cout << "cost" << cost << "\n";
        }
    }
    

    cout << ans;
    return 0;
}
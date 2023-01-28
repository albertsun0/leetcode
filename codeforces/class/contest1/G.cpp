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
    int n; cin >> n;
    int d; cin >> d;
    vector<int> v;
    for(int i = 0; i < n ; i++){
        int a; cin >> a;
        v.pb(a);
    }

    int l = 0;
    int r = n;

    while(l <= r){
        int m = (l+r)/2;
        int sum = 0;
        //m people go at same time
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(int i = 0; i < m; i++){
            q.push(v[i]);
        }
        int x = m;
        while(x < n){
            if(q.empty()){
                break;
            }
            ll t = q.top();
            q.pop();
            q.push(t + v[x]);
            x++;
        }
        
        int good = true;

        while(!q.empty()){
            ll t = q.top();
            q.pop();
            if(t > d){
                good = false;
            }
        }
        if(m == 0){
            good = false;
        }
        if(!good){
            l = m + 1;  
        }
        else{
            r = m - 1;
        }
    }
        
        
    cout << l;
    return 0;
   
}
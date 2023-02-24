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
    int n; int m;
    cin >> n >> m;
    ll ans = 0;
    if(n == 1 && m == 1){
        cout << 1;
        return 0;
    }
    if (n >= m){
        ans = 1;
    }
    else{
        cout << 0;
        return 0;
    }
    if(m == 0){
        ans = 0;
    }
    for(ll i = 2; i <= n; i++){
        // if(i * m > n){
        //     continue;
        // }
        ll offset = i - 1;
        if(m == 0){
            ans+= offset;
            continue;
        }
        ll start = offset + i * (m-1);
        // cout << i << " " << start << "\n";
        if(start <= n){
            ans += min(n - start, i);
        }
        //cout << ans << "\n";
    }
    cout << ans << "\n";

    int test = 0;

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         //cout << j/i << " ";
    //         if(j/i == m){
    //             test++;
    //         }
    //     }
    //     //cout << "\n";
    // }
    // cout << test << "\n";
    
    return 0;
}
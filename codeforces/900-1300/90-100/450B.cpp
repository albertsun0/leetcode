#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    ll x,y,n; cin >> x >> y >> n;

    /*  
        f(1) = 2
        f(2) = 3                       -> 3 = 2 + f(3) -> f(3) = 1
        f(3) = f(2) + f(4)             -> 1 = 3 + f(4) -> f(4) = -2
        f(4) = f(1) + f(3) + f(4)
    */
    ll mod = 1000000007;
    ll cur = y-x;
    ll prev = y;

    for(int i = 3; i < n; i++){
        ll temp = cur;
        cur = cur - prev;
        prev = temp;
    }
    
    if(n == 1){
        cur = x;
    }
    if(n == 2){
        cur = y;
    }
    if(cur < 0){
        while(cur < 0){
            cur += mod;
        }
        cout << cur;
        return 0;
    }
    cout << cur % mod;
    return 0;
}
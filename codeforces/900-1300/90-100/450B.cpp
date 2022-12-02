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
    int x,y,n; cin >> x >> y >> n;

    /*  
        f(1) = 2
        f(2) = 3                       -> 3 = 2 + f(3) -> f(3) = 1
        f(3) = f(2) + f(4)             -> 1 = 3 + f(4) -> f(4) = -2
        f(4) = f(1) + f(3) + f(4)
    */
    int mod = 1e9+7;
    ll cur = y-x;
    ll prev = y;

    for(int i = 3; i < n; i++){
        ll temp = cur;
        cur = cur - prev;
        prev = temp;
    }
    cout << cur % mod;
    return 0;
}
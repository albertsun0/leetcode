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
    int n; int k; cin >> n >> k;

    ll l = 0; 
    ll r = 1e9 + 3;

    while(l <= r){
        ll mid = (l + r)/2;

        ll total = 0;
        ll val = 1;
        int i = 0;

        while(val > 0){
            val = mid/(pow(k,i));
            total+=val;
            i++;
        }
        if(total == n){
            cout << mid << "\n";
            return 0;
        }
        if(total > n){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    cout << l << "\n";

    return 0;
}

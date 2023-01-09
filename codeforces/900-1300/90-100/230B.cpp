#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool prime(ll n) {
    if (n < 2) return false;
        for (ll x = 2; x*x <= n; x++) {
            if (n%x == 0) return false;
        }
    return true;
}

int main () {
    fio;

    int n; cin >> n;

    for(int i= 0; i < n; i++){
        ll a; cin >> a;
        ll r = sqrt(a);
        if(r * r == a){
            //is perfect square
            if(prime(r)){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
        }
        else{
            cout << "NO";
        }
        cout << "\n";
    }

    return 0;
}
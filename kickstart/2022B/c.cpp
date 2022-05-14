#include <iostream>
#include <vector>
#include <algorithm>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void sol(int id) {
    ll r, a, b;
    cin >> r >> a >> b;
    
    long double ans = M_PI * r *r;
    int op = 0;
    while(r){
        if(op % 2 == 0){
            r *= a;
        }
        else{
            r/=b;
        }
        op++;
        ans += M_PI * r * r;
    }
    cout.precision(10);
    cout << "CASE #" << id << ": " << fixed << ans << "\n";
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        sol(i+1);
    }
    return 0;
}
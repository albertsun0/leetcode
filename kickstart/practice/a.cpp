#include <iostream>
#include <vector>
#include <algorithm>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll sol() {
    int l; int r;
    cin >> l >> r;
    int a = min(l,r);
    //there are a () next to eachother
    if(a == 0){
        return 0;
    }
    ll ans = 0;

    for(int i = 1; i <= a; i++){
        ans += i;
    }
    return ans;

}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cout << "CASE #" << i+1 << ": "<< sol() << "\n";
    }
    return 0;
}
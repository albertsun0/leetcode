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

bool prime(int n) {
    if (n < 2) return false;
    for (int x = 2; x*x <= n; x++) {
        if (n%x == 0) return false;
    }
    return true;
}



int main () {
    fio;
    int n, m, k; cin >> n >> m >> k;

    int l = 0;
    int r = n * m;

    if(m < n){
        swap(n,m);
    }

    while(l <= r){
        int mid = (l+r)/2;
        // if(mid > m && prime(mid)){
        //     mid--;
        // }
        //how to check if mid is in mult table
        for(int i = 0; i < n; i++){

        }

    }

    return 0;
}

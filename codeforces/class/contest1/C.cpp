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
    double n, x, y, r;
    cin >> n >> x >> y >> r;

    int ans = 0;

    for(int i = 0; i < n; i++){
        double xi, yi;
        cin >> xi >> yi;
     
        if((xi-x) * (xi-x) + (yi-y) * (yi-y) <= r*r){
            ans++;
        }
    }

    cout << ans;
}
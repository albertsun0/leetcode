#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int y, k, n;
    cin >> y >> k >> n;

    if(y >= n){
        cout << "-1";
        return 0;
    }
    //find next multiple of k that is > y;
    int start = ((y/k) + 1)*k;
    if(start > n){
        cout << "-1";
        return 0;
    }
    for(ll i = start; i <= n; i+=k){
        cout << i-y << " ";
    }

    return 0;
}
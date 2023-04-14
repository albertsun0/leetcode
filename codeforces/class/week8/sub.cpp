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
    int mx = 1e6+2;
    //1 = prime
    //0 = composite
    vector<int> v (mx, 1);

    for(int i = 2; i * i < mx; i++){
        if(v[i]){
            for(int a = 2; a * i < mx; a++){
                v[a*i] = 0;
            }
        }
    }

    // for(auto i: v){
    //     cout << i << " ";
    // }

    int a; cin >> a;

    for(int i = 4; i < a; i++){
        if(v[i] == 0 && v[a - i] == 0){
            cout << i << " " << a-i;
            return 0;
        }
    }

    return 0;
}

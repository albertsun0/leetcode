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

int div(int n){
    int ans = 0;

    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(n/i == i){
                ans++;
            }
            else{
                ans += 2;
            }
        }
    }
    return ans;
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        cout << div(a) << "\n";
    }
    
    return 0;
}

//1 2 4 8 16 

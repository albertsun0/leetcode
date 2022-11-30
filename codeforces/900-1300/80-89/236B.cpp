#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <limits.h>

using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<int> factors(int n){
    vector<int> r;
    for(int i = 2; i * i <= n; i++){
        while(n%i == 0){
            r.pb(i);
            n/=i;
        }
    }
    if (n > 1) r.push_back(n);
    return r;
}

int main () {
    fio;
    int mod = 1073741824;
    int ans = 0;

    int a, b, c;
    cin >> a >> b >>c;
    map<int,int> save;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                if(save.find(i * j * k)!= save.end()){
                    ans+= save[i * j * k];
                    ans %= mod;
                    continue;
                }
                //calculate
                map<int, int> count;
                for(auto v: factors(i)){
                    count[v]++;
                }
                for(auto v: factors(j)){
                    count[v]++;
                }
                for(auto v: factors(k)){
                    count[v]++;
                }
                // if(i == 3 && j == 4 && k == 3){
                //     for(auto i: count){
                //         cout << i.first << " " << i.second << "\n";
                //     }
                // }
                int factors = 1;
                for(auto i: count){
                    factors *= (i.second + 1);
                    factors %= 1073741824;
                }
                save[i * j * k] = factors;
                ans+= factors;
                ans %= mod;
            }
        }
    }
    cout << ans; 



    return 0;
}
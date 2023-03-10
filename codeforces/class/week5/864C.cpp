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
    int a,b,f,k;
    cin >> a >> b >> f >> k;

    //a = endpoint, b = bus capacity, f = gas station point, k = trips required
    
    int trips = 0;
    int fuel = b;
    bool right = true;
    int ans = 0;
    while(trips < k){
        if(right){
            fuel -= f-1;
            if(fuel < 0){
                cout << "-1";
                return 0;
            }
            if(fuel < 2 * (a - f) + 1){
                //if not last trip
                if(!(trips == k - 1 && fuel >= a - f + 1)){
                    ans++;
                    fuel = b;
                }
            }
            else{
                fuel--;
            }
            fuel -= a - f;
        }
        else{
            fuel -= a - f;
            if(fuel < 0){
                cout << "-1";
                return 0;
            }
            if(fuel < 2 * (f) - 1){
                if(!(trips == k - 1 && fuel >= f)){
                    ans++;
                    fuel = b;
                }
            }
            else{
                fuel--;
            }
            fuel -= f;
        }
        right = !right;
        trips++;
    }
    if(fuel < 0){
        cout << "-1";
        return 0;
    }
    cout << ans;
    return 0;
}


/*

0123
 1


*/
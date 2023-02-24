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
    int a, b, f, k;
    cin >> a >> b >> f >> k;

    //0 -> a
    //fuel at gas station will be b - f
    //if you can make it to end and back to gas station: 2 * a - f with current tank, dont fuel
    //then go back to gast station, etc

    int gas = b;
    int trips = 0;
    int fuels = 0;
    bool right = true;
    while(trips < k){
        //start at 0
        //move to gas station
        if(gas < 0){
            cout << "-1";
            return 0;
        }
        if(right){
            gas -= f;
            if(gas < 0){
                cout << "-1";
                return 0;
            }
            if(!(gas >= 2 * (a-f))){
                gas = b;
                fuels++;
            }
            else{
                gas -= a-f;
            }
        }
        else{
            gas -= a-f;
            if(gas < 0){
                cout << "-1";
                return 0;
            }
            if(!(gas >= 2 * (f) && trips < k-1)){
                gas = b;
                fuels++;
            }
            else{
                gas -= a;
            }
        }
        right = !right;
        trips++;
    }

    cout << fuels << "\n";
 
    return 0;
}
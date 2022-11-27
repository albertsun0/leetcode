#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n; cin >> n;
    ll x = 0; 
    ll y = 0; 
    ll z = 0;
    for(int i = 0; i< n; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        x+=a;
        y += b;
        z += c;
    }

    if(x == 0 && y == 0 && z == 0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
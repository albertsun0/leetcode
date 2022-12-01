#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;

    int n; cin >> n;

    for(int i= 0; i < n; i++){
        ll a; cin >> a;

        set<int> s;
        s.insert(a);
        s.insert(1);
        for(ll x = 2; x * x <= a; x++){
            while(a % x == 0){
                a/=x;
                s.insert(x);
            }
        }
        if(a > 1){
            s.insert(a);
        }

        for(auto i: s){
            cout << i << " ";
        }
        cout << "mewo";
        cout << s.size() << "\n";
        if(s.size() == 3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
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
<<<<<<< HEAD
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include <limits.h>
#include <cmath>
#include <stack>

int main () {
    fio;
    int n; cin >> n;
    vector<string> s;
    for(int i = 0; i < n; i++){
        string o;
        cin >> o;
        if(o == "put"){
            string v; cin >> v;
            s.pb(v);
        }
        if(o == "get"){
            if(s.size() == 0){
                cout << "empty" << "\n";
            }
            else{
                cout << s[s.size() - 1] << "\n";
                s.pop_back();
            }
        }
        if(o == "iditarod"){
            bool found = false;
            for(int a = s.size() - 1; a >= 0; a--){
                if(s[a] == "snowcoat"){
                    found = true;
                    cout << "winner winner chicken dinner :)" << "\n";
                    s.erase(s.begin() + a);
                    break;
                }
            }
            if(!found){
                cout << "oopsimcold :(" << "\n";
            }
        }
    }
}

/*

3

1 2 3




*/
=======
#include <limits.h>
#include <stack>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n, m;
    cin >> n >> m;

    ll cost = m * (m+1)/2;
    //cout << "cost" << cost << "\n";
    int ans = 0;

    ll cur = 0;

    for(int i = 0; i < n; i++){
        int a; cin >> a; 
        cur += a;
        if (cur > cost){
            ans++;
            cur = 0;
            //sum of numbers from ans * m to ans * m + m
            ll start = m * ans;
            ll end = start + m;
            cost = (end * (end + 1) / 2) - (start * (start + 1) /2);
            //cout << "cost" << cost << "\n";
        }
    }
    

    cout << ans;
    return 0;
}
>>>>>>> c518aa7a741ef11e7c4f0637a4f96d0007ca81bd

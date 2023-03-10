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
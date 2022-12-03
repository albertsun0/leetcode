#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    vector<int> v;
    vector<int>s;
    for(int i  = 0 ; i < n; i++){
        int a; cin >> a;
        v.pb(a);
        s.pb(a);
    }
    sort(s.begin(), s.end());
    /*
        go through s and compare to v
        only one segment must be different
        segment in v must be reverse of segment in s
    */
    bool found = false;
    bool segment = false;
    int start = 0;
    int end = n;

    for(int i = 0 ; i < n+1; i++){
        if(i == n){
            cout << "yes\n";
            cout << "1 1";
            return 0;
        }
        if(s[i] != v[i]){
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(!segment && found && v[i] != s[i]){
            if(i >= 2 && v[i-2] != s[i-2]){
                //this means that previous was segment, so may continue
                segment = true;
                continue;
            }
            cout << "no";
            return 0;
        }
        if(!segment && v[i] != s[i]){
            segment = true;
            start = i;
        }
        if(segment && v[i] == s[i]){
            segment = false;
            found = true;
            end = i;
        }
    }
    if(segment){
        end = n;
    }
    //cout << start << " " << end << "\n";
    for(int i = start; i < end; i++){
        //cout << v[i] << " " << s[end-i-1] << "\n";
        if(v[i] != s[end-(i-start)-1]){
            
            cout << "no";
            return 0;
        }
    }

    cout << "yes\n";
    cout << start+1 << " " << end;
    return 0;
}
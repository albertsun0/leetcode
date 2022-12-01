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

int main () {
    fio;
    int n; cin >> n;
    vector<int> front;
    vector<int> back;
    string s; cin >> s;

    for(int i = 0; i < n; i++){
        front.pb(s[i]-'0');
    }
    for(int i = n; i < n*2; i++){
        back.pb(s[i]-'0');
    }
    
    
    sort(front.begin(), front.end());
    sort(back.begin(), back.end());

    bool less = true;

    if(front[0] > back[0]){
        less = false;
    }

    for(int i = 0; i< n; i++){
        if(less){
            if(front[i] >= back[i]){
                cout << "NO";
                return 0;
            }
        }
        else{
            if(front[i] <= back[i]){
                cout << "NO";
                return  0;
            }
        }
    }
    cout << "YES";
    return 0;
}
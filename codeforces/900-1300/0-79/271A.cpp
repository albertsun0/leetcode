#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool d(int n){
    string s = to_string(n);
    bool m[10] = {};
    for(int i = 0; i < s.length(); i++){
        if(m[s[i] - '0']){
            return false;
        }
        m[s[i] - '0'] = true;
    }
    return true;
}

int main () {
    fio;
    int n; 
    cin >> n;
    n++;
    while(!d(n)){
        n++;
    }

    cout << n;
    return 0;
}
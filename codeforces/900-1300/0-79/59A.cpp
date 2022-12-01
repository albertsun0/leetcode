#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    ll n; 
    cin >> n;
    int count = 0;
    string s = to_string(n);

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '4' || s[i] == '7'){
            count++;
        }
    }

    string s2 = to_string(count);

    for(int i = 0; i < s2.length(); i++){
        if(s2[i] != '4' && s2[i] != '7'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;

}
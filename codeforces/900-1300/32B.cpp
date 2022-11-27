#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    string s;
    cin >> s;

    string ans = "";

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.'){
            ans += '0';
        }
        else{
            if(s[i+1] == '.'){
                ans+='1';
            }
            else{
                ans += '2';
            }
            i++;
        }
    }
    cout << ans;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool v(char n){
    //cout << (n == 'a') || (n =='e') || (n =='i') || (n == 'o') || (n == 'u');
    return (n == 'a') || (n =='e') || (n =='i') || (n == 'o') || (n == 'u') || (n == 'y');
}

int main () {
    fio;
    string s; cin >> s;
    string ans = "";
    for(int i = 0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        if(!v(s[i])){
            
            ans = ans+ ".";
            ans = ans + s[i];
        }
    }

    cout << ans;


    return 0;
}
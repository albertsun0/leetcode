#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void sol() {
    string s;
    cin >> s;
    ll sum = 0;
    string ans = "";
    for(int i = 0; i< s.length(); i++){
        sum += s[i] - '0';
    }
    
    //int a = sum/9;
    int add;
    if(sum %9 == 0){
        add = 0;
    }
    else{
        ll target = (sum/9)*9 + 9;
        add = target - sum;
    }
    // cout << add << " " << s[0] << "\n";
    for(int i = 0 ; i < s.length(); i++){
        if(add < (s[i] - '0') && !(add == 0 && i == 0)){
            s.insert(s.begin() + i, add+'0');
            ans = s;
            break;
        }
        if(i == s.length() -1){
            ans = s + to_string(add);
            break;
        }
    } 

    
    
    cout << ans;
    
   
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cout << "Case #" << i+1 << ": ";
        sol();
        cout << "\n";
    }
    return 0;
}
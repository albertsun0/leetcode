#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void sol(int id) {
    string s;
    string s2; 
    cin >> s >> s2;
    int index = 0;
    for(int i = 0; i<s2.length(); i++){
        if(s2[i] == s[index]){
            index++;
        }
        if(index == s.length()){
            break;
        }
    }
    if(index == s.length()){
        cout << "Case #" << id << ": " << s2.length()-s.length() << "\n";
    }
    else{
        cout << "Case #" << id << ": " << "IMPOSSIBLE" << "\n";
    }
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        sol(i+1);
    }
    return 0;
}
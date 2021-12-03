#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



int main () {
    fio;
    int n; cin >> n;
    string s = "";
   
    for(int i =1; i<n; i++){
        s+= to_string(i);
    }
    for(int i = 0; i< s.length(); i++){
        cout << i+1 << " " << s[i] << "\n";
    }
    //cout << s;
    return 0;
}
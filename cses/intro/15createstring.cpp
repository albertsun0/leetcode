#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    string s; cin >> s;
    vector<char> letters;
    for(char c:s){
        letters.pb(c);
    }
    
    generate(letters, "");

    return 0;
}

void generate(vector<char> letters, string current){
    if(current.length() == letters.size()){
        cout << current;
    }
    for(int i = )
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    int n, t;

    cin >> n >> t;

    string s;
    cin >> s;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < s.length()-1; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout << s;
    return 0;
}
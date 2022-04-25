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
    for(int i = 0; i<n; i++){
        int a; cin >>a;
        if(a%7 == 0){
            cout << a << "\n";
            continue;
        }
        int t = a/10*10;
        for(int a = 0; a<=9; a++){
            if(t%7 == 0){
                cout << t << "\n";
                break;
            }
            t++;
        }
    }
    return 0;
}
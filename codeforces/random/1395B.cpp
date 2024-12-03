#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int t;
    cin >> t;

    for(int q = 0; q < t; q++){
         int n; int m; int x; int y;
         cin >> n >>  m >> x >> y;
         int sum = 0;
         for(int i = 0; i< n; i++){
             string s;
             cin >> s;
             for(int a = 0; a < s.length(); a++){
                if((s[a] == '.') && (a < s.length()-1) && (s[a+1] == '.')){
                    sum += min(x+x, y);
                    a++;
                }
                else if(s[a] == '.'){
                    sum += x;
                }
             }
         }
         cout << sum << "\n";
    }

    return 0;
}
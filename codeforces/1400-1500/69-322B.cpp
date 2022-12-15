#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <limits.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int r,g,b; cin >> r >> g >> b;
    if(r == 0 || g == 0 || b == 0){
        cout << r/3 + g/3 + b/3;
        return 0;
    }
    //answer will be using all of one color,
    int m1 = r/3 + r%3 + (g - r%3)/3 + (b - r%3)/3;
    int m2 = g/3 + g%3 + (r - g%3)/3 + (b - g%3)/3;
    int m3 = b/3 + b%3 + (r - b%3)/3 + (g - b%3)/3;
    cout << max(m1, max(m2,m3));
    return 0;
}
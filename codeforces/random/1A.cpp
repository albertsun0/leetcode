#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    ll n; ll m; double a;
    cin >> n >> m >> a;
    cout << fixed << setprecision(0);
    cout << ceil(n/a)*ceil(m/a);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back
#define ll unsigned long long
//find value starting from mx^2,0
int findx(ll start, ll max, ll x, ll y){
    if(y < max){
        return start-y+1;
    }
    return (start-y+1)-(max-x);
}

//find value startinf from 0, mx^2
int findy(ll start, ll max, ll x, ll y){
    if(x < max){
        return start-x+1;
    }
    return (start-y+1)-(max-y);
}

int main () {
    ll n;
    ll y; 
    ll x;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> y >> x;
        ll m = max(x,y);
        
        ll t = m*m;
        cout << m  << "\n";
        cout << t  << "\n";
        if(t%2 == 0){
            cout << findy(t,m,x,y) << "\n";
        }
        else{
            cout << findx(t,m,x,y) << "\n";
        }
        
    }

    return 0;
}

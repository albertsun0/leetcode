#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool win(ll hc, ll dc, ll h, ll d){
    //cout << hc << " " << dc << " " << h << " " << d << " ";
         ll m = min(hc/d, h/dc);
        if((hc - m*d ) > 0 && (h-m*dc) > 0){
            hc -= m*d;
            h-=m*dc;
        }
    //skip moves
    while(hc > 0 && h > 0){

        h-=dc;
        if(h<=0){
            return true;
        }
        hc-=d;
    }
    return hc > h;
}

bool sol(){ 
    ll hc, dc, h,d, c, db, hb;
    cin>> hc >> dc >> h >> d >> c >> db >> hb;
    //cout<<"solv";
    
    for(int i = 0; i<= c; i++){
        bool w = win(hc + i*hb, dc+(c-i)*db, h,d);
        if(w){
            return true;
        }
    }
    return false;
}

int main () {
    fio;
    int n; cin >> n;
    //cout << n;
    for(int i = 0; i< n; i++){
        if(sol()){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
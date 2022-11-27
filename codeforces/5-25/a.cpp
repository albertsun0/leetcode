#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool sol(){
    vector<double> v;
    int n; cin >> n ;
    double total = 0;
    for(int i = 0; i<n; i++){
        double a; cin >> a;
        total += a;
        v.push_back(a);
    }    

    for(int i = 0; i<n; i++){
        if((total - v[i])/(n-1) == v[i]){
            return true;
        }
    }
    return false;

}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        if(sol()){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}


/*
4 3 1 2
4 2 2 2 
*/
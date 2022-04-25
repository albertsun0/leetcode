#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int sol() {
    int n; cin >> n;
     set<int> s;

    for(int i = 0; i< n; i++){
       int a; cin >> a;
       s.insert(a);
    }

    if(s.size() == 1){
        cout << "YES";
        return 0;
    }
    if(s.find(1) != s.end()){
        if(s.find(0) != s.end()){
            cout << "NO";
            return 0;
        }
        else{
            for(int i: s){
                if(s.find(i+1) != s.end() || s.find(i-1) != s.end()){
                    cout << "NO";
                    return 0;
                }
            }
            cout << "YES";
            return 0;
        }

    }
    else{
        cout << "YES";
    }
   
    return 0;
}
int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        sol();
        cout << "\n";
    }
    return 0;
   
}


/*
    if all

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;

    map<int,int> m;
    m[25] = 0;
    m[50] = 0;
    m[100] = 0;
    for(int i = 0; i< n; i++){
        int a; cin>> a;
        if(a == 50 || a == 100){
            if(m[25] == 0){
                cout << "NO";
                return 0;
            }
            m[25]--;
        }
        if(a == 100){
            if(m[50] == 0){
                if(m[25] >= 2){
                    m[25] -=2;
                }
                else{
                    cout << "NO";
                    return 0;
                }
            }
            else{
                m[50]--;
            }   
        }
        m[a]++;
    }
    cout << "YES";
    return 0;
}
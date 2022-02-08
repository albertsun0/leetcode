#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int calc (vector<int> v, int n){
    int round = 1;
    int pos = v[0];
    for (int i = 1; i < n; i++){
        if(v[i] < pos){
            round++;
        }
        pos = v[i];
    }
    return round;
}

int main () {
    fio;
    int n; cin >> n;
    int m; cin >> m;
    vector<int> v(n,0);
    for(int i = 0; i<n; i++){
        int a; cin>> a;
        v[a-1] = i;
    }
    
    for(int i = 0; i<m; i++){
        int a; cin >> a;
        int b; cin >> b;
        a--;b--;
        
        int temp = -1;

        for(int j = 0; j<n; j++){
            if(v[j] == a || v[j] == b){
                if(temp == -1){
                    temp = j;
                }
                else{
                    int t = v[temp];
                    v[temp] = v[j];
                    v[j] = t;
                }
            }
        }

        cout << calc(v, n) << "\n";
    }
    // }
    // else{
    //     if()
    // }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <limits.h>
#include <stack>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main () {
    fio;
    
    int n; cin >> n;
    vector<int> v;
    int sum = 0;
    vector<int> prefix;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        sum+=a;
        v.pb(a);
        prefix.pb(sum);
    }
    
    sum = 0;

    map<int, vector<int>> m;

    for(int i = n-1; i >= 0; i--){
        sum+= v[i];
        m[sum].push_back(i);
    }

    sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        sum+= v[i];
        if(m.find(sum) != m.end()){
            vector<int> t = m[sum];
            int r = t.size() -1;
            while()
            for(int index: m[sum]){
                if(index <= i+1){
                    continue;
                }
                //cout << i << " " << index << "\n";
                if(prefix[index-1] - prefix[i] == sum){
                    ans++;
                } 
            }
        }
    }
       
    cout << ans;
    return 0;
}

//0 1 2 3 4
//1 3 6 6 9

//1 2 3 4 5 

//1 3 6 11 16
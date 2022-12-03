#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; cin >> n;
    set<int> starts;
    map<int, map<int,int>> graph;
    vector<int> bottles;
    for(int i = 0; i < n ;i ++){
        int a, b;
        cin >> a >> b;
        bottles.pb(a);
        graph[a][b]++;
    }
    set<int> visit;
    for(auto item: graph){
        int s = item.first;
        //cout << s << " ";
        if(visit.find(s) != visit.end()){
            continue;
        }
        //cout << visit.size() << "\n";
        queue<int> q;
        q.push(s);
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto b: graph[cur]){
                int i = b.first;
                if(i == cur){
                    if(b.second == 1){
                        continue;
                    }
                }
                if(visit.find(i) != visit.end()){
                    continue;
                }
                visit.insert(i);
                q.push(i);
            }
        }
    }

    int ans = 0;
    for(auto cur: bottles){
        //int cur = i.first;
        if(visit.find(cur) == visit.end()){
            ans++;
        }
    }
    cout << ans;

    return 0;
}
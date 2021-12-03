#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include <queue>

int main () {
    fio;
    int n; 
    queue<int> q;

    int total = 0;
    int count = 0;
    int contain = 0;
    int prev = 9999999;
    
    while(cin >> n){
        contain++;
        if(contain <= 3){
            q.push(n);
            total+=n;
            if(n>prev){
            count++;
            }
            prev = total;
        }
        else{
            int current = prev + n - q.front();
            q.pop();
            q.push(n);
            if(current > prev){
                count++;
            }
            prev = current;
        }
        
        //cout << count;
    }

    cout << count;
    return 0;
}
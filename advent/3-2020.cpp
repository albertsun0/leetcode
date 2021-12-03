#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    string s; 
    int count1 = 0;
    int dx[5] = {1,3,5,7,1};
    int dy[5] = {1,1,1,1,2};
    int ans[5] = {0,0,0,0,0};
    int pos[5] = {0,0,0,0,0};
    //int dy = 1;
    //int dx = 3;
    //int posx = 0;
    cin>>s;
    int c = 1;
    while(cin >> s){
        if(s == "z"){
            break;
        }
        for(int i = 0; i<5; i++){
            if(c % dy[i] == 0){
                pos[i] += dx[i];
                pos[i] = pos[i] % s.length();
                if(s[pos[i] == '#']){
                    ans[i]++;
                }
            }
        }
        c++;
        // posx += dx;
        // posx = posx % s.length();
        // if(s[posx] == '#'){
        //     count++;
        // }
        
    }
    int r = 1;
    for(int i:ans){
        r*=i;
    }
    cout << r;
    return 0;
}
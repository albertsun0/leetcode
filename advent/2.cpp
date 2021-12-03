#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    int n; 
    string s;
    int count = 0;
    int forward = 0;
    int down = 0;
    int aim = 0;
    while(cin >> s){
        if(s == "z"){
            break;
        }
        cin >> n;
        if(s =="up"){
            aim -= n;
        }
        if(s =="down"){
            aim+=n;
        }
        if(s == "forward"){
            forward += n;
            down += aim*n;
        }
        
    }
    cout << down * forward;
    return 0;
}
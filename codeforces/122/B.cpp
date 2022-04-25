#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int sol(){
    string s; cin>>s;
    int len = s.length();
    int count = 0;
    for(int i = 0; i<len; i++){
        count += s[i] - '0';
    }

    if(count == len/2 && len%2 == 0){
        int temp  = count - (s[0] - '0');
        int temp2 = count - (s[len-1] - '0');
        temp = min(temp,len-temp-1);
        temp2= min(temp2, len-temp2-1);
        return max(temp,temp2);
    }
    else{
        return min(count, len-count);
    }
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i< n; i++){
        cout << sol() << "\n";
    }
    return 0;
}
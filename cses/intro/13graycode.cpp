#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void recurse(string s, int len){
    if(len == 0){
        cout << s << "\n";
        return;
    }
    string temp = s;
    string temp2 = s;
    temp.push_back('0');
    temp2.push_back('1');
    if(s == ""){
        recurse(temp, len-1);
        recurse(temp2, len-1);
    }
    else if(s[s.length()-1] == '1' && len %2 == 0){
        recurse(temp2, len-1);
        recurse(temp, len-1);
        
    }
    else{
        recurse(temp, len-1);
        recurse(temp2, len-1);
    }
    
}

int main () {
    fio;
    int n; cin >> n;

    recurse("", n);
    
    return 0;
}

/*
0000
0001
0011
0010


0111
0110
0100
0101

1101
1111
1110
1100
1000
1001
1011
1010


0000
0001
0011
0010
0110
0111
0101
0100
1100
1101
1111
1110
1010
1011    
1001
1000


0
1
3
2
6
7
5
4
12



*/
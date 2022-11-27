#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main () {
    fio;
    string a;
    string b;
    cin >> a >> b;

    if(a == b){
        cout << "YES";
        return 0;
    }

    if(a.length() != b.length()){
        cout << "NO";
        return 0;
    }

    int count = 0;
    int index1, index2;
    for(int i = 0; i< a.length(); i++){
        if(a[i] != b[i]){
            if(count == 0){
                index1 = i;
            }
            if(count == 1){
                index2 = i;
            }
            count++;
        }
    }

    if(count != 2){
        cout << "NO";
        return 0;
    }

    swap(a[index1], a[index2]);
    if(a == b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;

}
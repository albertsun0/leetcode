#include <iostream>
#include <vector>
#include <algorithm>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#define pb push_back
#define ll long long

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool v(char c){
    return c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u';
}

bool sol() {
    string s; cin >> s;

    for(int i = 0; i<s.length(); i++){
        if(v(s[i])){
             //found a vowel, now need to find next vowel to make a
             //double sylabe start
            int a = i+1;
            string cur = "";
            cur+= s[i];
            while(a < s.length()){
                cur += s[a];
                if(v(s[a])){
                    break;
                }
                a++;
            }
            if(a == s.length()){return false;}
           // cout << cur << "\n";
            //found smallest string after current vowel
            //now need to find matching string
            //bool match = false;
            for(int j = a+1; j<s.length(); j++){
                if(s[j] == cur[0]){
                    if(s.length() - cur.length() < j){
                        break;
                    }
                    for(int z = 0; z<cur.length(); z++){
                        if(s[j+z] != cur[z]){
                            break;
                        }
                        if(z == cur.length() -1){
                             for(int e = a+1; e < j; e++){
                                if(v(s[e])){
                                    return true;
                                }
                            }
                        }
                    }
                }
            }

           
        }
    }
    
    return false;
}

int main () {
    fio;
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        cout << "CASE #" << i+1 << ": ";
        if(sol()){
            cout << "Spell!";
        }
        else{
            cout << "Nothing.";
        }
        cout << "\n";
       
    }
    return 0;
}



/// we need to find two of same string with atleast two vowels and 
//  has a sylable in between
//  a word has atleast one vowel 
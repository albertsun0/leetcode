#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void recursive(int p1, int p2, int p3, int num, int target){
    if(num > 0){
        target = target == 2 ? 3:2;

        recursive(p1, p2, p3, num-1, target);
        cout << "1 " << target << "\n";
    }
    
    //move n-2 disks to the rightmost disk

    //move n-1 to middle
}

//move n-1 to the middle 
//move n-2 to the middle

int main () {
    fio;
    int n; cin >> n;
    int total = (1 << n)-1;
    recursive(n, 0, 0, n, 3);
}



//4
/*
1 0 0
2
3
4

2 1 0
3
4

3 1 2
4

3 0 1
4   2

4 3 1
    2

1 3 2
4

1 2
4 3

4 1 0
  2
  3
*/


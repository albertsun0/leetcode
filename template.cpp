using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <limits.h>

#define pb push_back
#define ll long long

struct Node {
    int a;
    int b;
    Node * next;
}


int main () {
    Node * n = new Node(10);
    Node * n2 = new Node(20);
    n->next = n2;
    cout << n -> value << " " << n ->next;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
bool canFormSquare(int l1, int b1, int l2, int b2, int l3, int b3) {
    int total_area = l1 * b1 + l2 * b2 + l3 * b3;
    int side = (int) sqrt(total_area);
 
    if (side * side != total_area) return false; 
 
    if (b1 == side && b2 == side && b3 == side && (l1 + l2 + l3) == side) 
        return true;
 
    if (l1 == side && l2 == side && l3 == side && (b1 + b2 + b3) == side) 
        return true;
 
 
    if (l1 == l2 && l1 + l3 == side) {
        if (b1 + b2 == side && b3 == side) 
            return true;
    }
 
    if (l2 == l3 && l2 + l1 == side) {
        if (b2 + b3 == side && b1 == side) 
            return true;
    }
 
    if (l1 == l3 && l1 + l2 == side) {
        if (b1 + b3 == side && b2 == side) 
            return true;
    }
 
 
    if (b1 == b2 && b1 + b3 == side) {
        if (l1 + l2 == side && l3 == side) 
            return true;
    }
 
    if (b2 == b3 && b2 + b1 == side) {
        if (l2 + l3 == side && l1 == side) 
            return true;
    }
 
    if (b1 == b3 && b1 + b2 == side) {
        if (l1 + l3 == side && l2 == side) 
            return true;
    }
 
    return false;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
 
        if (canFormSquare(l1, b1, l2, b2, l3, b3))
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}

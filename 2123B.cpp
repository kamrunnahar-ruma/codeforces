#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
 
        int max_strength = 0;
        int player_strength;
 
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (i == m) player_strength = x;
            max_strength = max(max_strength, x);
        }
 
        if (k > 1 || player_strength == max_strength) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
 
    return 0;
}

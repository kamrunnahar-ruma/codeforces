#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >>n;
        int count =0;
        for (int d =1; d <=9; ++d) {
            int ordinary = d;
            while (ordinary<=n) {
                count++;
                ordinary =ordinary *10+ d;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}

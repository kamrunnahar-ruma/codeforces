#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int minstep=(n+1)/2;
     while (minstep <= n) {
        if (minstep % m == 0) {
            cout << minstep << endl;
            return 0;
        }
        minstep++;
    }
    cout<<"-1"<<endl;
    return 0;
}
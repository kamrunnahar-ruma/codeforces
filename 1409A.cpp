#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int c = abs(a-b);
        int move = (c+9)/10;
        cout<<move<<endl;
    }
    return 0;
}
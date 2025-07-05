#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        int count = (n/2)+(n%2);
        cout<<count<<endl;
    }
    return 0;
}
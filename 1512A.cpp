#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int j;
        if (a[0] == a[1] || a[0] == a[2]) {
            j = a[0];
        } else {
            j = a[1];
        }
        for(int i =0; i<n; i++){
            if(a[i]!=j){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
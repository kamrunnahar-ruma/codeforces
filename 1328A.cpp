#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int count=(b- (a%b))%b;
        cout<<count<<endl;  
    }
    return 0;
}
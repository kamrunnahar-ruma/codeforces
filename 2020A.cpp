#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int count =0;
        if(k==1){
            count=n;
        }else{
            while(n>0){
                count+=n%k;
                n=n/k;
            }

        }
        cout<<count<<endl;
    }
}
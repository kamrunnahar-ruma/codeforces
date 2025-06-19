#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n){
    return (n & (n-1))==0;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(isPowerofTwo(n)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long sum=a+b+c+n;
        long long maxvalue=max({a,b,c});
        if((sum)%3==0 &&((sum)/3>=maxvalue)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
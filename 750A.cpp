#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int t = 240-k;
    int sum=0;
    int count=0;
    for(int i =1; i<=n; i++){
        if((sum+=i*5)<=t){
            count++;
        }else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
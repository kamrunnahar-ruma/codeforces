#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        bool win = false;
        for(int i =1; i<=100; i++){
            if(i==a){
                continue;
            }
            if(abs(i-x)<abs(a-x) && abs(i-y)<abs(a-y)){
                win=true;
                break;
            }
        }
        if(win==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
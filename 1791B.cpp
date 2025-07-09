#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int ai=0,bi=0;
        bool ispass=false;
        for(int i=0; i<str.size(); i++){
        
            if(str[i]=='U'){
                bi++;
            }
            if(str[i]=='D'){
                bi--;
            }
            if(str[i]=='R'){
                ai++;
            }
            if(str[i]=='L'){
                ai--;
            }
            if(ai==1 && bi==1){
                ispass=true;
            }
        }
        if(ispass){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
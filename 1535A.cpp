#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int teamFirstmax=max(s1,s2);
        int teamFirstmin=min(s1,s2);
        int teamsecmax=max(s3,s4);
        int teamsecmin=min(s3,s4);
        if(teamFirstmax<teamsecmin || teamsecmax<teamFirstmin){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
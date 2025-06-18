#include<bits/stdc++.h>
using namespace std;

bool isLowercaseOnly(const string& s) {
    for (char c : s) {
        if (c < 'a' || c > 'z') {
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a = "codeforces";
        char c;
        cin>>c;
        int count = 0;
        for(int i =0; i<a.length(); i++){
          if(c==a[i]){
            count++;
          }  
        }
        if(count>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string str2 = "";
        str2+=str[0];
        for(int i =1; i<str.size()-1;i+=2){
            str2+=str[i];
        }
        str2+=str.back();
        cout<<str2<<endl;
    }
    return 0;
}
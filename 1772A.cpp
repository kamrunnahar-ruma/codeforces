#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int num = str[0]-'0';
        int num1=str[2]-'0';
        int sum = num+num1;
        cout<<sum<<endl;
    }
    return 0;
    
}
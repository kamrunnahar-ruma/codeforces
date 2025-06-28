#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str,str1,str2,str3;
        cin>>str>>str1;
        str2=str;
        str3=str1;
        str.erase(0,1);
        str1.erase(0,1);
        string s=str3[0]+str;
        string s1= str2[0]+str1;
        cout<<s<<" "<<s1<<endl;

    }
    return 0;
}
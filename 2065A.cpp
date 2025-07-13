#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        str.erase(str.size()-2);
        str.push_back('i');
        cout<<str<<endl;
    }
    return 0;
}
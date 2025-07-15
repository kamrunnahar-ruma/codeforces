#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    for(int i =0; i<4; i++){
        cin>>arr[i];
    }
    string str;
    cin>>str;
    int sum=0;
    for(int i =0;i<str.size();i++){
        int index=str[i]-'1';
        sum+=arr[index];
    }
    cout<<sum<<endl;
    return 0;
}
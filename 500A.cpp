#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1);
    for(int i =1; i<n; i++){
        cin>>arr[i];
    }
    int position=1;
    while(position<m){
        position+=arr[position];
    }
    if(position==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
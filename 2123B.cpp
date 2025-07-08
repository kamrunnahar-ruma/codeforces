#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0; i<n;i++){
            if(arr[j-1]<arr[i]){
                count++;
            }
        }
        if(count<=k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
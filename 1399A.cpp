#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool possible=true;

        for(int i =0;i<n-1; i++){
            if(abs(arr[i]-arr[i+1])>1){
                possible=false;
                break;
            }
        }
        if(possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
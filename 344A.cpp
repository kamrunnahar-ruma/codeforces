#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
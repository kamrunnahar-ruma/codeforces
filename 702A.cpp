#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int maxlen=1;
    int curentlen=1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            curentlen++;
            maxlen=max(maxlen,curentlen);
        }else{
            curentlen=1;
        }
    }
    cout<<maxlen<<endl;
    return 0;
}
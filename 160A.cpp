#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int count =0;
    int sum1=0;
    for(int i =0; i<n;i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i =0;i<n;i++){
        sum1+=arr[i];
        count++;
        if(sum1>sum-sum1){
            break;
        }
    }
    cout<<count<<endl;
    return 0;

}
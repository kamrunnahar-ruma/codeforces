#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    int mid = arr[1];
    int sum1=0;
    for(int i=0; i<3; i++){
        sum1+=abs(arr[i]-mid);
    }
    cout<<sum1<<endl;
    return 0;

}
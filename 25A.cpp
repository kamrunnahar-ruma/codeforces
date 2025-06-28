#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int evencount =0;
    int oddcount =0;
    int evenidx=-1;
    int oddidx =-1;
    for(int i =0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            evencount++;
            evenidx = i+1;
        }else{
            oddcount++;
            oddidx = i+1;
        }
    }
    if(evencount==1){
        cout<<evenidx<<endl;
    }else{
        cout<<oddidx<<endl;
    }
    return 0;
}
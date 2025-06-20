#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    for(int i =0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int aPb,aPc,bPc,aPbPc;
    aPb=arr[0];
    aPc=arr[1];
    bPc=arr[2];
    aPbPc=arr[3];
    int cMb=aPc-aPb;
    int c = (bPc + cMb)/2;
    int a=aPc-c;
    int b = aPb-a;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int serejacount=0,dimacount=0;
    int left=0,right=n-1;
    bool turn = true;
    while(left<=right){
        int choose=0;
        if(arr[left]>arr[right]){
            choose+=arr[left];
            left++;
        }else{
            choose+=arr[right];
            right--;
        }
        if(turn){
            serejacount+=choose;
        }else{
            dimacount+=choose;
        }
        turn =!turn;
    }
    cout<<serejacount<<" "<<dimacount<<endl;
    return 0;
}
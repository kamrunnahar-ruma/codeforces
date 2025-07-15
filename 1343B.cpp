#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        if((n/2)%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i =1; i<n/2; i++){
            arr.push_back(i*2);
        }
        for(int i =1; i<n/2; i++){
            arr.push_back(i*2-1);
        }
        int last_odd = 3 * (n / 2) - 1;
        arr.push_back(last_odd);
        for(int i =0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
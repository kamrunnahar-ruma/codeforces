#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        unordered_map<int, int> freq;

        for(int i =0; i<n; i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int count=-1;
        for(auto &pair:freq){
            if(pair.second>=3){
                count=pair.first;
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        vector<int> index;
        int a,b;
        for(int i=0; i<n;i++){
            cin>>a>>b;
            if(a<=10){
                arr.push_back(b);
                index.push_back(i+1);
            }
        }
        int maxvale = arr[0], idx = index[0];
        for(int i=1;i<arr.size(); i++){
            if(arr[i]>maxvale){
                maxvale=arr[i];
                idx=index[i];
            }
        }
        cout<<idx<<endl;
    }
    return 0;
}
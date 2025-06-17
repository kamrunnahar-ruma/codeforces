#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int max=*max_element(arr.begin(),arr.end());
    int S=0;

    for(int i = 0;i<n;i++){
        S+=(max-arr[i]);
    }
       
    cout<<S<<endl;
    return 0;

}

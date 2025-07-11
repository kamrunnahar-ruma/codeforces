#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int day;
    cin>>day;
    while(day--){
        int m;
        cin>>m;
        int count = upper_bound(arr.begin(), arr.end(), m) - arr.begin();
        cout<<count<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveZeros(vector<int>& arr) {
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            currentCount++;       // keep counting 0's
            maxCount = max(maxCount, currentCount); // update max if needed
        } else {
            currentCount = 0;     // reset count if not 0
        }
    }

    return maxCount;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<maxConsecutiveZeros(arr)<<endl;
    }
    return 0;
}
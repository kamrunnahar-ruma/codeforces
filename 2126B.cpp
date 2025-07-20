#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i =0;i<n; i++){
            cin>>arr[i];
        }
        int hikeCount = 0;
        int i = 0;
 
        while (i <= n - k) {
            bool canHike = true;
            for (int j = i; j < i + k; j++) {
                if (arr[j] != 0) {
                    canHike = false;
                    break;
                }
            }
 
            if (canHike) {
                hikeCount++;
                i += k + 1; 
            } else {
                i++; 
            }
        }
 
        cout << hikeCount << endl;
    }
    return 0;
        
}
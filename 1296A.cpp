#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int evencount=0, oddcount=0;
        for(int i=0; i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                evencount++;
            }else{
                oddcount++;
            }
        }
        if(oddcount > 0 && (evencount > 0 || n % 2 == 1)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}
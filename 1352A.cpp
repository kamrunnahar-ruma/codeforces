#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rem,count=0;
        vector<int> arr;
        while(n!=0){
            if((n%10)>0 && (n/10)==0){
                count++;
                arr.push_back(n);
                break;
            }
            rem=n%10;
            if(rem>0){
                count++;
                arr.push_back(rem);
            }
            n=n/10;
            if(n%10==0){
                count++;
                arr.push_back(n);
                break;
            }
        }
        cout<<count<<endl;
        for (int val : arr) {
            cout << val << " ";
        }  
        cout<<endl; 
    }
    return 0;
}
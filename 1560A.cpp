#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n = 1;
        int count = 0;
        int k;
        cin>>k;
        while(true){
            if(n%3!=0 && n%10 !=3){
                count++;
                if(count == k){
                    cout<<n<<endl;
                    break;
                }
                
            }
            n++; 
        }
    }
    return 0;
}
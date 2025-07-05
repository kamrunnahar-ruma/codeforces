#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count =-1,count1=-1;
        for(int i=0; i<n;i++){
            if(str[i] == 'B'){
                if(count==-1){
                    count=i;
                }
                count1=i;
            }

        }
        int result=count1-count+1;
        cout<<result<<endl;

    }
    return 0;
}
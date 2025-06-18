#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int sum=0;
        int rem;
        if(a>=10 && a<=99){
            while(a!=0){
                rem = a%10;
                sum +=rem;
                a= a/10;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int min,max;
        if(x<y){
            min=x;
            max=y;
        }else{
            min =y;
            max = x;
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
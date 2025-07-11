#include<bits/stdc++.h>
using namespace std;
int maxproduct(int a,int b,int c){
    int maxvalue =0;
    for(int x=0; x<=5; x++){
        for(int y=0; y<=5-x; y++){
            int z=5-x-y;
            int A=a+x;
            int B=b+y;
            int C=c+z;
            maxvalue=max(maxvalue,A*B*C);
        }
    }
    return maxvalue;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<maxproduct(a,b,c)<<endl;
    }
    return 0;
}
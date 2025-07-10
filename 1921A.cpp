#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,cx,cy,dx,dy;
        cin>>ax>>ay;
        cin>>bx>>by;
        cin>>cx>>cy;
        cin>>dx>>dy;
        int ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        int ac=sqrt(((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy)));
        int area=ab*ac;
        cout<<area<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c = (a+b)/2;
        int min = abs(c-a)+ abs(c-b);
        cout<<min<<endl;
    }
    return 0;
}
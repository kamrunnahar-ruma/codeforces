#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    cin>>n;
    int level=0,total=0;
    while(true){
        level++;
        int cube=level*(level+1)/2;
        total+=cube;
        if(total>n){
            level--;
            break;
        }
    }
    cout<<level<<endl;
    return 0;
}
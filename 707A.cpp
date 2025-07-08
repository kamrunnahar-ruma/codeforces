#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    char c;
    bool iscolor=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m; j++){
            cin>>c;
            if(c=='C'||c=='M'||c=='Y'){
                iscolor=true;
            }
        }
    }
    if(iscolor==true){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
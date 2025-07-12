#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool isvanaya= false;
        for(int i =0; i<10; i++){
            if((n+1)%3==0){
                isvanaya=true;
                break;
            }else if((n-1)%3==0){
                isvanaya=true;
                break;
            }
        }
        if(isvanaya==true){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}
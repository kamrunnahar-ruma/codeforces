#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,t;
    cin>>m>>t;
    string str;
    cin>>str;
    for(int i=0;i<t; i++){
        for(int j=0; j<m-1; j++){
            if(str[j]=='B' && str[j+1]=='G'){
                swap(str[j],str[j+1]);
                j++;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
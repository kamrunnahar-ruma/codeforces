#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string, int> database;
    for(int i =0; i<n; i++){
        string str;
        cin>>str;

        if(database[str]==0){
            cout<<"OK"<<endl;
        }else{
            cout<<str<<database[str]<<endl;
        }
        database[str]++;
    }

    return 0;
}
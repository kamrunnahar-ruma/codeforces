#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int available=0;
    int unthreat=0;
    for(int i =0; i<n; i++){
        int event;
        cin>>event;
        if(event==-1){
            if(available>0){
                available--;
            }else{
                unthreat++;
            }
        }else{
            available+=event;
        }
    }
    cout<<unthreat<<endl;
    return 0;

}
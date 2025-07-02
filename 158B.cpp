#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int one=0,two=0,three=0,four=0;
    for(int i =0; i<n; i++){
        cin>>x;
        if(x==1)one++;
        else if(x==2)two++;
        else if(x==3)three++;
        else if(x==4)four++;
    }
    int taxi = four;
    int pair = min(three,one);
    taxi+=pair;
    three -=pair;
    one -=pair;
    taxi+=three;
    taxi+=two/2;
    if(two%2==1){
        taxi+=1;
        one -=min(2,one);
    }
    if(one>0){
        taxi += (one+3)/4;
    }
    cout<<taxi<<endl;
    return 0;
}
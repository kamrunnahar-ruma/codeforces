#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i =0; i<str.length(); i++){
        int digit = str[i] - '0';
        int invert = 9-digit;

        if(i==0 && invert==0){
            continue;
        }
        if(invert<digit){
            str[i] = invert +'0';
        }
    }
    cout<<str<<endl;
    return 0;
}
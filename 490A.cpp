#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    vector<int> programmer,math,sport;
    for(int i =1; i<=n; i++){
        cin>>arr[i];
        if(arr[i]==1){
            programmer.push_back(i);
        }
        if(arr[i]==2){
            math.push_back(i);
        }
        if(arr[i]==3){
            sport.push_back(i);
        }
    }
    int team = min({(int)programmer.size(),(int)math.size(),(int)sport.size()});
    cout<<team<<endl;
    for(int i =0; i<team; i++){
        cout<<programmer[i]<<" "<<math[i]<<" "<<sport[i]<<endl;
    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> arr(n + 1, -1);
    arr[0] = 0;
    for(int i =1; i<= n; i++){
        if(i >= a && arr[i - a]!= -1){
            arr[i] = max(arr[i],arr[i - a] + 1);
        }
        if(i >= b && arr[i - b]!= -1){
            arr[i]= max(arr[i],arr[i - b] +1);
        }
        if(i >= c && arr[i - c]!= -1){
            arr[i] =max(arr[i], arr[i - c]+ 1);
        }
    }
    cout<<arr[n]<<endl;
    return 0;
}
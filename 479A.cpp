#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int f1= a+b*c;
    int f2 = a*(b+c);
    int f3 = a*b*c;
    int f4 = (a+b)*c;
    int f5= a + b + c;
    int f6 = (a * b) + c;
    int arr[6]={f1,f2,f3,f4,f5,f6};
    int max = *max_element(arr,arr+6);
    cout<<max<<endl;
    return 0;
}
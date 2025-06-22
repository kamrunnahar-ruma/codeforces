#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long x) {
    long long root = sqrt(x);
    return root * root == x;
}
bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr;
    for(int i=0; i<n;i++){
        cin>>arr;
    if (isPerfectSquare(arr) && isPrime(sqrt(arr))) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}
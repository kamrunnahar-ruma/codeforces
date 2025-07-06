#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
 
        vector<long long> dist(102, 1e18);
        priority_queue<pair<long long, int>, vector<pair<long long,int>>, greater<>> pq;
        dist[a] = 0;
        pq.push({0, a});
 
        while(!pq.empty()){
            auto [cost, val] = pq.top(); pq.pop();
            if(val == b) break;
            if(val + 1 <= 100 && cost + x < dist[val + 1]){
                dist[val + 1] = cost + x;
                pq.push({dist[val + 1], val + 1});
            }
            if((val ^ 1) <= 100 && cost + y < dist[val ^ 1]){
                dist[val ^ 1] = cost + y;
                pq.push({dist[val ^ 1], val ^ 1});
            }
        }
 
        cout << (dist[b] == 1e18 ? -1 : dist[b]) << endl;
    }
    return 0;
}
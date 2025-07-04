#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int mcost=(n/m)*b;
    int leftcost=(n%m)*a;
    int mincost=min(leftcost,b);
    int totalcost=mcost+mincost;
    int allsingle = n * a;
    cout << min(totalcost, allsingle) << endl;
    return 0;
}
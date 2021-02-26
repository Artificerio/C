#include <bits/stdc++.h>
using namespace std;
#define len(v) (int)(v).size()
#define all(v) v.begin(), v.end()
#define INF 10000000
typedef long long ll;

void solve(){

}
vector<int>arr[100001];
int vis[100001];

void dfs(int node){
   vis[node] = 1;
   for(int child : arr[node]){
       if(!vis[child]){
           dfs(child);
       }
   } 
}




int main(){

    int n,m,a,b;
    cin>>n>>m;
    for(int i = 1; i<=m; i++){
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int cc = 0;
    for(int i = 1; i<=n; i++){
        if(!vis[i]){
            dfs(i);
            cc++;
        }
    }
    if(cc == 1 && m == n-1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}


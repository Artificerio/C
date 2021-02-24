
#include <bits/stdc++.h>
using namespace std;
#define len(v) (int)(v).size()
#define all(v) v.begin(), v.end()
#define INF 10000000
typedef long long ll;


//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/

void solve(){
    
}

vector<int>ar[1001];
int vis[1001], dist[1001];


void dfs(int node, int d){
    vis[node] = 1;
    dist[node] = d;
    
    for(int child : ar[node]){
        if(!vis[child]){
            dfs(child,dist[node]+1);
        }
    }

}

int main(){
int n,q,a,b;
 cin>>n;

 for(int i = 1; i<=n-1; i++){
     cin>>a>>b;
     ar[a].push_back(b);
     ar[b].push_back(a);
 }

 dfs(1,0);

 cin>>q;

 int ans = -1;
 int min_dist = INF;
 while(q--){
     int girl_city;
     cin>>girl_city;

     if(dist[girl_city] < min_dist){
        min_dist = dist[girl_city];
        ans = girl_city;
     }
     else{
         if(dist[girl_city] == min_dist && girl_city < ans){
             ans = girl_city;
         }
     }

 }
 cout<<ans<<"\n";

 

}

#include <bits/stdc++.h>
using namespace std;
#define len(v) (int)(v).size()
#define all(v) v.begin(), v.end()
typedef long long ll;

//https://www.hackerearth.com/ru/problem/algorithm/connected-components-in-a-graph/


void solve(){
    
}

vector<int> ar[10001];
int vis[10001];


//since we declare our arrays globaly we can access them from any point of out programm
void dfs(int node){
    vis[node] = 1;
    
    for(int child : ar[node]){
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
      ar[a].push_back(b);
      ar[b].push_back(a);
  }

  int cc = 0;//Connected component count

  for(int i = 1; i<=n; i++){
      if(!vis[i]){
         dfs(i);
         cc++; 
      }
  }
  cout<<"Connected component count is "<<cc<<"\n";
}


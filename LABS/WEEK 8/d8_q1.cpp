//mst using prims
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e6;
int main(){
    int vertexno;
    cin>>vertexno;
    vector<pair<int,int>> graph[vertexno];
    vector<int>parent(vertexno,-1);
    vector<int>dist(vertexno,inf);
    vector<int>visited(vertexno);
    set<pair<int,int>> s;
   int a;
    for(int i=0;i<vertexno;i++){
        for(int j=0;j<vertexno;j++){

            cin>>a;
            if(a!=0&&j>i){
                graph[i].push_back({j,a});
                graph[j].push_back({i,a});
            }
           
        }
    }
    s.insert({0,0});
    dist[0]=0;
    int cost=0;
    while(!s.empty()){
        pair<int,int> temp=*(s.begin());
        s.erase(temp);
        int uweight=temp.first;
        int u=temp.second;
        visited[u]=1;
        cost+=uweight;
        for(int i=0;i<graph[u].size();i++){
            int v=graph[u][i].first;
            int edgeweight=graph[u][i].second;
            if(dist[v]>edgeweight&&visited[v]==0){
                s.erase({dist[v],v});
                dist[v]=edgeweight;
                s.insert({dist[v],v});
                parent[v]=u;

            }
        }



    }
    cout<<cost;
    return 0;
}
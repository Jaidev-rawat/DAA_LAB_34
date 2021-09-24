//to also find a path tracing
//using adjacency matrix

#include<bits/stdc++.h>
using namespace std;
void printPath(vector<int> &parent,int i){
    if(parent[i]==-1)
        return;
    cout<<" "<<parent[i]+1;
    printPath(parent,parent[i]);
}
int main(){
    int v,a;
    cin>>v;
    vector<int> graph[v];
    vector<int> weight(v,1e5);
    vector<int> parent(v,-1);
    
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>a;
            graph[i].push_back(a);
           
        }
    }
    int source;
    cin>>source;
    source = source -1 ;//-1 since nodes starting from 1
    weight[source]=0; 
    parent[source]=-1;
    set<pair<int,int>> nodes;
    nodes.insert({0,source});
    while(!nodes.empty()){
        auto x=*(nodes.begin());
        nodes.erase(x);
        int u = x.second;
        int uweight=x.first;
        for(int i=0;i<v;i++){
            if(graph[u][i]!=0){
            int v = i;
            int edgeweight= graph[u][i];
            if(weight[v]>weight[u]+edgeweight){
                nodes.erase({weight[v],v});
                weight[v]=weight[u]+edgeweight;
                nodes.insert({weight[v],v});
                parent[v]=u;
            }
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        if(weight[i]<1e5){
            cout<<i+1;
            printPath(parent,i);
            cout<<" : "<<weight[i]<<"\n";
        }
        else{
            cout<<i+1<<" "<<"No Path";
        }
    }


}
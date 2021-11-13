//max spanning tree
#include<bits/stdc++.h>
using namespace std;
int find(int i,vector<int> &parent){
    if(parent[i]<0){
        return i;
    }
    else{
        return (parent[i]=find(parent[i],parent));
    }
}
void unionn(int u,int v,vector<int> &parent){
    int pu=find(u,parent);
    int pv=find(v,parent);
    if(pu!=pv){
        if(parent[pu]<parent[pv]){
            parent[pu]+=parent[pv];
            parent[pv]=pu;
        }
        else{
            parent[pv]+=parent[pu];
            parent[pu]=pv;
        }
    }
}
int main(){
    int n,a;
    cin>>n;
    vector<vector<int>> graph;
    vector<int> parent(n,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cin>>a;
            if(a!=0&&j>i)
            graph.push_back({a,i,j});
        }
    }
    sort(graph.begin(),graph.end(),greater<vector<int>>());
    int minw=0;
    int siz=graph.size();
    
    for(int i=0;i<siz;i++){
        int u=graph[i][1];
        int v=graph[i][2];
        int w=graph[i][0];
        int pu=find(u,parent);
        int pv=find(v,parent);
        if(pu!=pv){
            minw+=w;
            unionn(u,v,parent);

        }
    }
    cout<<"Maximum Spanning Weight is: "<<minw;

    return 0;
}
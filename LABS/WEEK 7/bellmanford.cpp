#include<bits/stdc++.h>
using namespace std;
void printPath(vector<int> &parent,int i){
    if(parent[i]==-1)
        return;
    cout<<" "<<parent[i]+1;
    printPath(parent,parent[i]);
}
int main(){
    int n,src;
    cin>>n;
    int graph[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    cin>>src;
    vector<int> dist(n,1e5);
    vector<int> parent(n,-1);
    dist[src-1]=0;
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][j]&&dist[j]>dist[i]+graph[i][j]&&dist[i]!=1e5){
                    dist[j]=dist[i]+graph[i][j];
                    parent[j]=i;

                }
            }
        }
    }
    //check negative cycle
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][j]&&dist[j]>dist[i]+graph[i][j]){
                   cout<<"Negative cycle detected";
                   return 0;

                }
            }
        }
     for(int i=0;i<n;i++)
    {
        if(dist[i]<1e5){
            cout<<i+1;
            printPath(parent,i);
            cout<<" : "<<dist[i]<<"\n";
        }
        else{
            cout<<i+1<<" "<<"No Path";
        }
    }
}
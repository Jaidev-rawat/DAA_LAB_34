//mst using prims
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int main(){
    int vertexno;
    cin>>vertexno;
    vector<int> graph[vertexno];
    int a;
    for(int i=0;i<vertexno;i++){
        for(int j=0;j<vertexno;j++){
            cin>>a;
            if(a==-1){
                a=inf;
            }
            graph[i].push_back(a);
        }
    }
    for(int i=0;i<vertexno;i++){
        for(int j=0;j<vertexno;j++){
            for(int k=0;k<vertexno;k++){
                int sum=(graph[i][k]+graph[k][j]);
                if(graph[i][j]>sum&&graph[i][k]!=-1&&graph[k][j]!=-1){
                    graph[i][j]=sum;
                }
            }
        }
    }
    cout<<"THE OUTPUT IS  = \n";
    for(int i=0;i<vertexno;i++){
        for(int j=0;j<vertexno;j++){
            if(graph[i][j]!=inf)
            cout<<graph[i][j]<<" ";
            else
            cout<<"INF"<<" ";
        }
        cout<<"\n";
    }
     
    return 0;
}
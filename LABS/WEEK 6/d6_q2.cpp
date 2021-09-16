#include<bits/stdc++.h>
using namespace std;
int main(){

    int v;
    cin>>v;
    int arr[v][v]={0};
    int colour[v]={0};
    int current =1;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    queue<int> q;
    q.push(0);
    colour[0]=current;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        //cout<<node<<" ";
        current = current * (-1);
        for(int i=0;i<v;i++)
        {
            if(arr[node][node]!=0)
            {
                cout<<"Not Bipartite";
                return 0;
            }
            if(arr[node][i]==1&&colour[i]==0)
            {
                q.push(i);
                colour[i]=current;
            }
            if(arr[node][i]==1&&colour[node]==colour[i])
            {
                cout<<"Not Bipartite";
                return 0;
            }
        }
    }

    cout<<"Bipartite";

    return 0;

}
//path exist or not

#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 6;
int arr[N][N]={0};
int visited[N]={0};
int isPath(int source,int destination,int n)
{
     visited[source]=1;
    cout<<source<<" ";
    if(source==destination)
        return 1;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0&&arr[source][i]==1)
        {
            int k=isPath(i,destination,n);
            if(k==1)
            {
                
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n;
    
    int x,y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
       cin>>arr[i][j];
    }
    }
    int ans = isPath(0,4,n);
    if(ans)
    {
        cout<<"\n present";
    }
    else
    {
        cout<<"\n Not present";
    }
    return 0;
}
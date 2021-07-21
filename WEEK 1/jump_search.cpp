#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cin>>key;
    int pos=-1;
    int count =1;
    int step=2;
    int prev=0;
    
    while(arr[(min(n,step))-1]<key)
    {
        count++;
        prev=step;
        step=step*2;
        if(prev>=n)
        {
            pos=-1;
            break;
        }
    }
    count++;
    while(arr[prev]<key)
    {
        prev++;
        count++;
        if(prev>=(min(step,n)))
        {
            pos=-1;
            break;
        }

    }
    count++;
    if(arr[prev]==key)
    {
        pos=prev;
        
    }

    if(pos!=-1)
    {
        cout<<"present "<<count<<"\n";
    }
    else
        cout<<"not present "<<count<<"\n";
    }

}
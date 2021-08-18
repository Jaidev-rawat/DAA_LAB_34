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
    
    int count =0;
    int l=0;
    int r=n-1;
    int pos = -1;
    while(l<=r)
    {
        //mid=(l+r)/2;
        count++;
        int mid=((r-l)/2 + l);
        if(arr[mid]==key)
        {
            pos=mid;
            break;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else
            r=mid-1;

    }
    if(pos!=-1)
    {
        cout<<"present "<<count<<"\n";
    }
    else
        cout<<"not present "<<count<<"\n";
    }
     
}
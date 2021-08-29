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
    
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    int flag = -1;
    while(start<end)
    {
        if(arr[start]+arr[end]==key)
        {
            cout<<arr[start]<<"  "<<arr[end]<<", ";
            end--;
            flag=0;
        }
        else if(arr[start]+arr[end]<key)
            start++;
        else
            end--;
            
      }
    
    if(flag)
    {
        cout<<"not present ";
    }
    cout<<"\n";
    
}
}
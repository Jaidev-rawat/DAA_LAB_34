#include <bits/stdc++.h>
using namespace std;
int binary_s(int arr[],int low,int high,int key)
{
    while(low<=high)
    {
        int mid = (high-low)/2+low;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else    
            high=mid-1;

    }
    return 0;
}
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
 
    int flag=0;
    int count =0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int k=arr[i]+arr[j];
            int x= binary_s(arr,j,n-1,k);
            if(x)
            {
                cout<<i+1<<", "<<j+1<<", "<<x+1<<"\n";
                flag++;
            }


        }
    }
    if(flag==0)
    {
        cout<<"No Sequence Found \n";
    }
        
    }

    return 0;
     
}
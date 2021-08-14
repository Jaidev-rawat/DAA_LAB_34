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
    
    int compare = 0;
    int swap=0;
    int temp;
    int t2;
    for(int i=0;i<n-1;i++)
    {
        temp=i;
        for(int j=i+1;j<n;j++)
        {
            
            compare++;
            if(arr[j]<arr[temp])
            {
                temp=j;
            }
        }
        swap++;
        t2=arr[i];
        arr[i]=arr[temp];
        arr[temp]=t2;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<"\n";
    cout<<"comparisons = "<<compare<<"\n";
    cout<<"shifts = "<<swap<<"\n";
   
        
    }

    return 0;
     
}
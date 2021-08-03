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
    
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(arr[i]-arr[j]==key)
                count++;

       }
   }
   cout<<count<<"\n";
   
        
    }

    return 0;
     
}
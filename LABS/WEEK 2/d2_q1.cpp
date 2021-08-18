#include<bits/stdc++.h>
using namespace std;

// int lowerfun(int arr[],int low,int hi,int key){
//     while(low<hi)
//     {
//         int mid = (hi-low)/2 + low;
//         if(arr[mid]<key)
//         {
//             low=mid+1;
//         }
//         else 
//         {
//             hi=mid;
//         }

//     }
//         if(arr[low]>=key)
//         {
//             return low;
//         }
//         if(arr[hi]>=key)
//             return hi;
        
//             return -1;
    
// }


// int upperfun(int arr[],int low,int hi,int key){
//     while(low<hi)
//     {
//         int mid = (hi-low)/2 + low;
//         if(arr[mid]<=key)
//         {
//             low=mid+1;
//         }
//         else 
//         {
//             hi=mid;
//         }

//      }
//         if(arr[low]>key)
//         {
//             return low;
//         }
//          if(arr[hi]>key)
//         {
//             return hi;
//         }
//             return -1;
   

// }
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
    int *lower=lower_bound(arr,arr+n,key);
    if(*lower!=key)
    {
        cout<<"Key not present "<<"\n";
        return 0;
    }
    int *upper=upper_bound(arr,arr+n,key);
    
    
        cout<<key<<" - "<<upper-lower<<"\n";
   
        
    }

    return 0;
     
}
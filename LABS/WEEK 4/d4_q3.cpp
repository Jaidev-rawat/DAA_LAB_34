//Kth smallest no;
#include<bits/stdc++.h>
using namespace std;
int comparisons=0;
int swaps =0;
int partition(int arr[],int l,int h)
{
    int i=l-1;
    int temp;
     int x = rand()%(h-l+1)+l;
     swap(arr[x],arr[h]);
    
    int pivot =arr[h];
    for(int f=l;f<=(h-1);f++)
    {
        if(arr[f]<pivot)
        {
            i++;
            swap(arr[i],arr[f]);
       
        }
      
        
    }
      swap(arr[i+1],arr[h]);
     
    // temp=arr[i+1];
    // arr[i+1]=arr[h];
    // arr[h]=temp;
    return(i+1);
}
int quicksort(int arr[],int l,int h,int k)
{
    
     if (l<h) 
    {   
        
        int m = partition(arr,l,h);
        if(m==(k-1))
            return arr[m];
        else if(m>(k-1))
            return quicksort(arr,l,m-1,k);
        else
            return quicksort(arr,m+1,h,k);
    }
   
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cin>>k;
   if (k > 0 && k <= r - l + 1) 
   {
       cout<<"NOT PRESENT";
   }
   else{
    int f=quicksort(arr,0,n-1,k);
    cout<<f<<"\n";
   }
    
    // else
    // {
    //     cout<<"Not Present \n";
    // }
   
    
    }
  
}


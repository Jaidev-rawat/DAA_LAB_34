//Quick Sort
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
            
            // temp=arr[i];
            // arr[i]=arr[f];
            // arr[f]=temp;
        }
      
        
    }
      swap(arr[i+1],arr[h]);
     
    // temp=arr[i+1];
    // arr[i+1]=arr[h];
    // arr[h]=temp;
    return(i+1);
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {   
       
        int m = partition(arr,l,h);
        quicksort(arr,l,m-1);
        quicksort(arr,m+1,h);
    }
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
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    // cout<<"comparisons = "<<comparisons;
    // cout<<"\n";
    // cout<<"swaps = "<<swaps;
    // comparisons = 0;
    // swaps = 0;
    // cout<<"\n";
    
    }
  
}


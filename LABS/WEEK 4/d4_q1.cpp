//merge sort

#include<bits/stdc++.h>
using namespace std;
int comparisons =0;
int inversions = 0;
void merge(int arr[],int l,int mid,int h)
{
  
    int leftlen=(mid-l+1);
    int rightlen=(h-mid);
    int left[leftlen];
    int right[rightlen];
    
    for(int i=0;i<leftlen;i++)
    {
        left[i]=arr[l+i];   // not always from zero thus added from l
    }
    for(int i=0;i<rightlen;i++)
    {
        right[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int count=l;        // not always from zero thus used l
    while(i<leftlen&&j<rightlen&&(++comparisons))
    {
        if(left[i]<right[j])
        {
            inversions++;
            arr[count++]=left[i++];
        }
        else
            arr[count++]=right[j++];
    }
    
    while(i<leftlen)
    {   
        arr[count++]=left[i++];
    }
    while(j<rightlen)
    {
        arr[count++]=right[j++];
    }
}
void mergesort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid = (h-l)/2+l;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
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
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    cout<<"comparisons = "<<comparisons;
    cout<<"\n";
    cout<<"inversions = "<<inversions;
    comparisons =0;
    inversions =0;
    cout<<"\n";
    
    }
  
}


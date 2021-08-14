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
    int j;
    int compare = 0;
    int swap=0;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        int temp=arr[i];
       
        while((arr[j]>temp&&j>=0)&&(++compare))
        {
           
            swap++;
            arr[j+1]=arr[j];
            j--;
        }
        swap++;
        arr[j+1]=temp;
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
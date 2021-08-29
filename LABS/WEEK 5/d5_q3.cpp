#include<bits/stdc++.h>
using namespace std;
int main()
{
    
 

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int i=0,j=0;
    while(i<n&&j<n2)
    {
        if(arr[i]==arr2[j])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<arr2[j])
        {
            i++;
        }
        else
            j++;

    }
    cout<<"\n";

}
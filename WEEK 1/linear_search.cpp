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
    int pos=-1;
    int count =0;
    for(int i=0;i<n;i++)
    {
        count++;
        if(arr[i]==key)
            {
                pos=i;
                break;
            }
    }
    if(pos!=-1)
    {
        cout<<"present "<<count<<"\n";
    }
    else
        cout<<"not present "<<count<<"\n";
    }

}
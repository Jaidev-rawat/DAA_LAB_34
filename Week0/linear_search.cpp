#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of Integers";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"Enter the element to find";
    cin>>key;
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            {
                pos=i;
                break;
            }
    }
    if(pos!=-1)
    {
        cout<<"Element found at index "<<pos;
    }
    else
        cout<<"Element not found";

}
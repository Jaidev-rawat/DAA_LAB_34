#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count[26]={0};    
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        count[arr[i]-97]++;
        if(max<count[arr[i]-97]&&count[arr[i]-97]>1)
        {
            max=count[arr[i]-97];
        }

    }
    if(max!=INT_MIN)
    {
        for(int i=0;i<26;i++)
        {
            if(count[i]==max)
            {
                cout<<(char)(i+97)<<"-"<<count[i]<<"   ";
            }
        }
    }
    else
    {
        cout<<"NO Duplicate Present ";
    }
    cout<<"\n";
}
}
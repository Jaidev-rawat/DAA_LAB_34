#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> s;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        
        cin>>v1[i];
      
    }
    for(int i=0;i<n;i++){
       
        cin>>v2[i];
       
    }
    for(int i=0;i<n;i++){
      
        s.push_back({v2[i],v1[i]});
    }
    sort(s.begin(),s.end());
    int end=-1;
    
    for(int i=0;i<n;i++){
        if(s[i].second>=end){
            cout<<i+1<<" ";
            end=s[i].first;
        }
    }


}
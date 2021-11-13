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
      
        s.push_back({v1[i],v2[i]});
    }
    sort(s.begin(),s.end());
    
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<s[i].second);
            max=s[i].second;
    }
    vector<int>days(max+1,-1);
    int count=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int duration=s[i].first;
        int deadline=s[i].second;
        deadline--;
        while(duration>0&&deadline>=0){
            if(days[deadline]==-1){
                duration--;
            }
            deadline--;
        }
        if(duration==0){
            int duration=s[i].first;
            int deadline=s[i].second;
                count++;
                ans.push_back(i+1);
                while(duration>0&&deadline>=0){
            if(days[deadline]==-1){
                days[deadline]=0;
                duration--;
                
            }
            deadline--;
            
        }
                
            }
    }
    cout<<"total = "<<count<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}
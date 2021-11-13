#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        minHeap.push(a);
    }
    int cost=0;
    while(minHeap.size()>1){
        int a=minHeap.top();
        minHeap.pop();
        int b=minHeap.top();
        minHeap.pop();
        cost+=a+b;
        minHeap.push(a+b);
        
    }
    cout<<"Cost is = "<<cost;
}
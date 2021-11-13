#include<bits/stdc++.h>
using namespace std;
struct bag{
    float value;
    float weight;
    float vpw;
};typedef struct bag stb;
bool comp(stb s1,stb s2){
    if(s1.vpw>s2.vpw){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    vector<stb> k(n);
    for(int i=0;i<n;i++){
        cin>>k[i].weight;
    }
    for(int i=0;i<n;i++){
        cin>>k[i].value;
        k[i].vpw=k[i].value/k[i].weight;
    }
    int capacity;
    cin>>capacity;
    float fvalue=0;
    sort(k.begin(),k.end(),comp);
    for(int i=0;i<n;i++){
        if(capacity>k[i].weight){
            capacity-=k[i].weight;
            fvalue+=k[i].value;
        }
        else{
            fvalue+=k[i].vpw*capacity;
            break;
        }
    }
    cout<<fvalue;

}

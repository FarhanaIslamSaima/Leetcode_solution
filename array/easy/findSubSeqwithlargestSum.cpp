#include<iostream>
#include<vector>
#include<algorithm>
#include <queue>
using namespace std;
int main(){
    int a;
    int k;
    cin>>a;
    int arr[a];
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<a;i++) {
        
        cin>>arr[i];
        pq.push({arr[i],i});

    }
    cin>>k;
    vector<pair<int,int>>v;
    while(k--){
        v.push_back({pq.top().second,pq.top().first});
        pq.pop();
    }
vector<int>ans;
for(auto x: v) ans.push_back(x.second);
for(auto i:ans) cout<<i;






    return 0;
}
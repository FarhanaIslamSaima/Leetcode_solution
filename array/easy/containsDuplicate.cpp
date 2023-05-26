#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int a;
    int k;
    cin>>a;
    int arr[a];
    map<int,int>mp;
   
    cin>>k;
    int flag=0;
    

    for(int i=0;i<a;i++){
        
      if(mp.find(arr[i])!=mp.end()){
        if(abs(i-mp[arr[i]])<=k && i!=mp[arr[i]]){
            flag=1;
            break;
        }

      }
      mp[arr[i]]=i;
    }
    if(flag==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
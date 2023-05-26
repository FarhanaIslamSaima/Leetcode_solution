#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include <algorithm>
#include<map>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
     map<int,int>mp;
    for(int i=0;i<x;i++){
        cin>>arr[i];
        int d=2*arr[i];
        mp[d]=i;
    }
    int flag=0;
    for(int i=0;i<x;i++){
    if(mp.find(arr[i])!=mp.end()){
        flag=1;
        break;


    }
   

    }
     if(flag==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
   




    return 0;
}
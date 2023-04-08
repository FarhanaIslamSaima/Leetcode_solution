#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    vector<int>count(10000,0);
    for(int i=0;i<x;i++){
        cin>>arr[i];
        count[arr[i]]++;

    }
    int flag=1;
    int MIN=INT_MAX;
    for(int i=0;i<count.size();i++){
        if(count[i]>1){
            
        }
    

        }
        int gcd=0;
        
        for(int i=0;i<count.size();i++){
        
        if(count[i]>0){
            gcd=__gcd(gcd,count[i]);
        }
         
       


    

        }
  
        cout<<gcd;
       
    
    
    if(gcd==1){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

    return 0;

}
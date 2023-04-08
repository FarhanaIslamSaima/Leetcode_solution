#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
int nums[x];
for(int i=0;i<x;i++){
    cin>>nums[i];
}
int count=0;
for(int i=1;i<x;i++){
   if(nums[i]<=nums[i-1]){
       count++;
       if(i>=2){
             if(nums[i]<=nums[i-2]){
                 nums[i]=nums[i-1];
             }

       }
     
   }
}

if(count>1){
    cout<<"false";
}
else{
    cout<<"true";
}
cout<<count;
//cout<<count;
//return count;
   


    return 0;
}
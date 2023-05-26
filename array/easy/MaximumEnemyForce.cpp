#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    
    }

    int cnt=1;
   
    int ans=0;
    for(int i=0;i<a;i++){
        if(arr[i]==arr[i-1]) cnt++;
        else if(arr[i-1]==0 && i-cnt-1>=0 && (arr[i]==1 && arr[i-cnt-1]==-1 ) || arr[i-cnt-1]==1 && arr[i]==-1 ){
            
            ans=max(ans,cnt);
            cnt=1;
        }
      
 




        
    }
    cout<<ans;
    
       

 


    return 0;
}
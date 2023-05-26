#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
       int sum=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int divSum=sum/3;
    int count=0;
    int sum2=0;
    for(int i=0;i<a;i++){
        
         sum2+=arr[i];
         if(sum2==divSum){
            count++;
            sum2=0;
         }

    }
    
    cout<<count;
 

    return 0;
}
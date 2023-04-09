class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        int x=arr.size();
        int flag=1;
        if(x<=2){
            return false;
        }
        if(arr[0]>=arr[1]){
            return false;
        }

        int ind=0;
        for(int i=1;i<x;i++){
            if(arr[i]>arr[i-1] && arr[i]>=arr[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==x-1){
            flag=0;
        }
        for(int i=ind;i<x-1;i++){
            if(arr[i]<=arr[i+1]){
                flag=0;
                break;
            }
        }
        if(flag==0) return false;
        else return true;
        
    }
};
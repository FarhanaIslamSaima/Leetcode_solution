class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int l=1;
int count=0;

if(flowerbed.size()==1 ){
    if(flowerbed[0]==0 && n==0){
        return true;
    }
       if(flowerbed[0]==1 && n==0){
        return true;
    }
       if(flowerbed[0]==1 && n==1){
        return false;
    }
       if(flowerbed[0]==0 && n==1){
        return true;
    }
}
if(flowerbed[0]==0 && flowerbed[1]==0){
    count++;
    flowerbed[0]=1;

}

while(l<flowerbed.size()-1){
    if(flowerbed[l]==0){
        if(flowerbed[l-1]==0 && flowerbed[l+1]==0){
            count++;
            flowerbed[l]=1;
            l++;

        }
        else{
            l++;
        }
        
    }
    else{
        l++;
    }
    
}
if( flowerbed[l-1]==0 && flowerbed[l]==0){
    count++;
}

if(count>=n){
    return true;

}
else{
    return false;
}


    }
};
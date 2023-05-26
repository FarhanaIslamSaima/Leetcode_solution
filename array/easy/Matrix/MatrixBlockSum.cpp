class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
       vector<vector<int>>store(m,vector<int>(n,0));
       store[0][0]=mat[0][0];
       for(int i=1;i<n;i++){
           store[0][i]=store[0][i-1]+mat[0][i];
       }
       for(int i=1;i<m;i++){
           store[i][0]=store[i-1][0]+mat[i][0];
       
       for(int j=1;j<n;j++){
           store[i][j]=store[i-1][j]+store[i][j-1]-store[i-1][j-1]+mat[i][j];
       }
       }
       vector<vector<int>>ans(m,vector<int>(n,0));
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               int ei=min(m-1,i+k);
               int ej=min(n-1,j+k);
               
               ans[i][j]=store[ei][ej];
               
               if(i-k<=0){
                  if(j>k) {
                      
                      ans[i][j]-=store[ei][j-k-1];
                 


                  }
               }
               else{
                   ans[i][j]-=store[i-k-1][ej];
                   if(j>k){
                       ans[i][j]-=store[ei][j-k-1];
                       ans[i][j]+=store[i-k-1][j-k-1];
                   };

               }
               cout<<ans[1][2];

           }
       }
       return ans;
       




















        
    }
};
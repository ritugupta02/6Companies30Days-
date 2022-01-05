
class Solution {
  public:
    int findPosition(int N , int M , int K) {
       if(K==1 && M==1)
        return 1;
        if(K==M)
        return K-1;
      if(M>N){    
       int q=M/N;
       int remaining= M-N*q;
       int ans= K-1+remaining;
       if(ans>N){
       return ans-N;
      }
      return ans;
    
    }
   int ans= K+(M-1);
   if(ans>N){
       return ans-N;
   }
   return ans;
    }
};

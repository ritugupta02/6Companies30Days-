class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
     map<int, int> m;
    for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%k;
            m[nums[i]]++;
        }
    if(m[0] %2 != 0) 
        return false;

   for(auto i:m){
       if(i.first!=0 && m[k-i.first]!=i.second)
       return false;
   }
   return true;
    }
};

// https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,f=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                f=1;
            }
            sum+=nums[i];
        }
        if(sum<target){
            return 0;
        }
        if(sum==target){
            return nums.size();
        }
        if(f==1){
            return 1;
        }
        int ans, s=0,j=0,i=0,k=INT_MAX;
        
        while(i<nums.size()){
           
            if(s<target)
            {    s+=nums[i];
                 i++;
              }
            while(s>=target){
                s=s-nums[j];
                ans=i-(j+1);
               if(k>ans){
                   k=ans;
                      }
                j++;
                
            }
        }
        return k+1;
    }
};

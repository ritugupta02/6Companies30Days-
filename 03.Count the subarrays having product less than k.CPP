class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
     
        long long int mul=1, s=0,z=0,i=0;
        while(i<n){
            mul=mul*a[i];
            if(mul>=k)
              {
              while(s<=i && mul>=k){
                  mul/=a[s];
                  s++;
              }
            }
            z+=i-s+1;
            i++;
        }
        
        return z;
    }
};

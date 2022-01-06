class Solution{
public:

    int *findTwoElement(int *arr, int n) {
    int sum=0,s=0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        s+=(i+1);
        m[arr[i]]++;
    }
     int *res=new int[2];
    for (auto& t : m){
        if(t.second>1){
         res[0]=t.first;
            break;
        }
    }     
        
       res[1]=s-(sum-res[0]);
       return res;
    }
};

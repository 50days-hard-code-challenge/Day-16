class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>max)
            max=sum;
            if(sum<0)   
            sum=0;                                                                                                   
        }
return max;
        
    }
};

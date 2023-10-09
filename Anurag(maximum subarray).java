class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int cursum=0;
        int maxsum=Integer.MIN_VALUE;
        for(int i=0;i<n;i++)
        {
            cursum=cursum+nums[i];
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
            if(cursum<0)
            {
                cursum=0;
            }
          
        }
        return maxsum;
        
    }
}

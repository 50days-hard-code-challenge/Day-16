
class Solution {
    public int subarraySum(int[] nums, int k) {
        int n=nums.length;
        int count =0;
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum=nums[i];
            for(int j=i+1;j<n;j++)
            {
                sum=sum+nums[j];
                if(sum==k)
                {
                    count=count+1;
                }
            }
             
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==k)
            {
                count=count+1;
            }
        }
        return count;

        
    }
}

class Solution {
public:
    bool possible(vector<int>& nums,int mid, int k){
        long long int windowsum=0;
        long long int totalsum=0;
        for(int i=0;i<mid;++i){
            windowsum+=nums[i];
        }
        totalsum=1LL*nums[mid-1]*mid;
        if(totalsum-windowsum<=k){
            return 1;
        }
        int j=0;
        for(int i=mid;i<nums.size();++i){
            windowsum-=nums[j];
            windowsum+=nums[i];
            totalsum=1LL*nums[i]*mid;
            if(totalsum-windowsum<=k){
                return 1;
            }
            j++;

        }
        return 0;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int l=1;
        int e=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        while(l<=e){
            int mid=l+(e-l)/2;
            if(possible(nums,mid,k)){
                ans=mid;
                l=mid+1;
            }
            else
               e=mid-1;
        }
        return ans;
    }
};

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> prefix ;
        prefix[0]=1;
        int preSum = 0 ;
        int ans = 0 ;
        for(int i=0 ; i<n ; i++){
            preSum += nums[i];
            
            
            ans += prefix[preSum - k];
            
            prefix[preSum]+=1;
        }
        return ans ;
    }
};
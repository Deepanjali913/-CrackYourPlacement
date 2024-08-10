class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lSum = 0 , rSum = 0 , maxSum = 0 ;
        for(int i=0 ; i<k ; i++){
            lSum += nums[i];
        }
        maxSum = lSum ;
        int rIndex = n-1 ;
        for(int i=k-1 ; i>=0 ; i--){
            lSum -=nums[i]; 
            rSum += nums[rIndex--];
            maxSum = max(lSum + rSum , maxSum);
        }
        return maxSum ;
    }
};
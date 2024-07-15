//Leetcode 1 
// two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> table;
        vector<int> ans;
        for(int i=0 ; i<nums.size();i++){
            
            if(table.count(target-nums[i])){
                ans.push_back(i);
                ans.push_back(table[target-nums[i]]);
            }
            table[nums[i]]=i;
        }
        return ans;
    }
};
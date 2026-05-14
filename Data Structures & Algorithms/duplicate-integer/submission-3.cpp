class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int st = 0, end = nums.size()-1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i <= end; i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};
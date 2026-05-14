class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            int left = target - nums[i];
            if(map.find(left) != map.end()){
                return {map[left], i};
                //this ensures the smaller index first;
                //because the number that appears first is stored first inside the map;
            }else{
                map[nums[i]] = i;
            }
        }
    }
};

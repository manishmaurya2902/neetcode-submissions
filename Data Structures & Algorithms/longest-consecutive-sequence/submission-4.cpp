class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        if(nums.empty()) return 0;
        unordered_set<int> st(nums.begin(), nums.end());

        for(int num: nums){
            if(!(st.contains(num-1))){
                int curr = num;
                int streak = 1;
                while(st.contains(curr+1)){
                    curr = curr+1;
                    streak++;
                }
                longest = max(longest, streak);
            }
        }

        return longest;
    }
};

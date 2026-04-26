class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> indicies;
        for (int i = 0; i < nums.size(); i++) {
            indicies[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (indicies[diff] && i != indicies[diff]) return {i, indicies[diff]};
        }
        return {};
    }
};

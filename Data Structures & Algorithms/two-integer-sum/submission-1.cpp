class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); i++) {
            index[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int temp_target = target - nums[i];
            if (index.count(temp_target) && i != index[temp_target]) return {i , index[temp_target]};
        }
        return {};
    }
};

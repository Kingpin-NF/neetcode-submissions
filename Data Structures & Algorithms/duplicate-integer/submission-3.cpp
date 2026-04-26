class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> contains_num;
        for (int i = 0; i < nums.size(); i++) {
            if (contains_num.contains(nums[i])) return true;
            contains_num.insert(nums[i]);
        }
        return false;
    }
};
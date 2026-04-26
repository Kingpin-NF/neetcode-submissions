class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> s_occ;
        std::unordered_map<char,int> t_occ;

        for (int i = 0; i < s.size(); i++) {
            s_occ[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            t_occ[t[i]]++;
        }

        return s_occ == t_occ;
    }
};

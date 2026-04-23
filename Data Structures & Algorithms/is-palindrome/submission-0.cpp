class Solution {
public:
    bool isPalindrome(string s) {
        string string_substitute = "";
        for (char c: s) {if (isalnum(c)) string_substitute += std::tolower(c);}
        char* start = &string_substitute[0];
        char* end = &string_substitute[string_substitute.size()-1];

        for (int i = 0; i < string_substitute.size(); i++) {
            if (*start != *end) {return false;}
            ++start;
            --end;
        }
        return true;
    }
};

class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> bracket_map = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };

        std::stack<char> bracket_stack;

        if (s.size() % 2 == 1) {return false;}
        for (char c: s) {
            if (c == '(' || c == '{' || c == '[') {bracket_stack.push(c);}
            else {
                if (bracket_stack.empty() || bracket_map[c] != bracket_stack.top()) {return false;}
                bracket_stack.pop();
            }
        }
        return (bracket_stack.empty());
        }
    };

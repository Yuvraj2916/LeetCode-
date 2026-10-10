class Solution {
public:
    bool isValid(string s) {
    std::stack<char> stack;
        std::unordered_map<char, char> bracketMap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for (char ch : s) {
            if (bracketMap.count(ch)) {
                if (!stack.empty() && stack.top() == bracketMap[ch]) {
                    stack.pop();
                } else {
                    return false; 
                }
            } else {
                stack.push(ch);
            }
        }
        return stack.empty();
    }
};
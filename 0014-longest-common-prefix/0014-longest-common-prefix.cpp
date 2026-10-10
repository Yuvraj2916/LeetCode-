class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Return empty string if the array is empty

        std::string prefix = strs[0]; // Start with the first string as the prefix

        for (size_t i = 1; i < strs.size(); ++i) {
            // Compare the current string with the prefix
            while (strs[i].find(prefix) != 0) {
                // Reduce the prefix until it matches the start of the current string
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return ""; // Return empty if no common prefix
            }
        }

        return prefix;
        
    }
};
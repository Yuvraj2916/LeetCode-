class Solution {
public:
    int myAtoi(string s) {
        int index = 0, sign = 1, result = 0;
        const int n = s.size();
        while (index < n && s[index] == ' ') {
            index++;
        }
        if (index < n && (s[index] == '-' || s[index] == '+')) {
            sign = (s[index] == '-') ? -1 : 1;
            index++;
        }
        while (index < n && isdigit(s[index])) {
            int digit = s[index] - '0';

            if (result > (std::numeric_limits<int>::max() - digit) / 10) {
                return (sign == 1) ? std::numeric_limits<int>::max() : std::numeric_limits<int>::min();
            }

            result = result * 10 + digit;
            index++;
        }

        return result * sign;      
    }
};
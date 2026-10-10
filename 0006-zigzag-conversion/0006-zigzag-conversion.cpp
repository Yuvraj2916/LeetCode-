class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || numRows >= s.size()) {
            return s; // No zigzag conversion needed
        }

        std::vector<std::string> rows(std::min(numRows, (int)s.size())); // Create a vector for rows
        int currentRow = 0;
        bool goingDown = false; // Flag to determine direction of zigzag

        for (char c : s) {
            rows[currentRow] += c; // Place the character in the current row
            // Change direction if we reach the top or bottom row
            if (currentRow == 0) {
                goingDown = true;
            } else if (currentRow == numRows - 1) {
                goingDown = false;
            }
            // Move to the next row
            currentRow += goingDown ? 1 : -1;
        }

        // Concatenate all rows to get the final string
        std::string result;
        for (const std::string& row : rows) {
            result += row;
        }

        return result;
        
    }
};
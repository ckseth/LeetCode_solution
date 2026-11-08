class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) 
            return s;
        vector<string> rows(numRows, "");
        
        // 2. var for row num and direction
        int current_row = 0;
        bool going_down = false;
        for (char c : s) {

            rows[current_row] += c; 

            if (current_row == 0 || current_row == numRows - 1) {
                going_down = !going_down; // True then False, False then true
            }

            // 5. go to box acc to direction
            // if going_down True then go down +1, if not then go up(-1)
            if (going_down == true) {
                current_row = current_row + 1;
            } else {
                current_row = current_row - 1;
            }
        }

        // 6. create one string to store final result
        string result = "";
        for (string row : rows) {
            result += row;
        }
        
        return result;
    }
};

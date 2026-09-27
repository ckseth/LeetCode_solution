class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> openedIndexes;
        string result ="";

        for(int i = 0; i < s.size(); i++){
            if(s[i]=='(') {
                openedIndexes.push_back(result.length());
            }
            else if(s[i]==')'){
                int start = openedIndexes.back();
                openedIndexes.pop_back();

                reverse(result.begin() + start, result.end());
            }
            else {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};
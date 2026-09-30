class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> result;
        int current_depth =0;

        for(int i =0; i < seq.length(); i++){
            if (seq[i] == '(') {
            current_depth++;
            result.push_back(current_depth % 2);
            } else {
                result.push_back(current_depth % 2);
                current_depth--;
            }
        }
        return result;
    }
};
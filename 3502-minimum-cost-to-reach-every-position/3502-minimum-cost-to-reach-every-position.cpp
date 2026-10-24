class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n =cost.size();
        vector<int> result(n);
        int min_val = cost[0];
        for(int i=0; i<n; i++){
            if(cost[i] < min_val) {
                min_val = cost[i];
            }
            result[i] = min_val;
        }
        return result;
    }
};
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         vector<int> list;
        int r = matrix.size();       
        int c = matrix[0].size();  
        for(int i =0; i<r;i++){
            for(int j=0; j< c; j++){
                 list.push_back(matrix[i][j]);
            }
        }
        sort(list.begin(), list.end());
        return list[k-1];
    }
};
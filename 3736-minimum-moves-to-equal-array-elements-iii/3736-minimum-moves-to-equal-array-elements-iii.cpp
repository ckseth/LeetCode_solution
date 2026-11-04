class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max =0;
        for(int num: nums){
            if(num > max){
                max = num;
            }
        }
            int total_moves = 0;
            for(int num : nums) {
            total_moves += (max - num);
        }
        
        return total_moves;
    }    
};
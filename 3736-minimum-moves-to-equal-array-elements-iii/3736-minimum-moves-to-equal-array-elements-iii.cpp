class Solution {
public:
    int minMoves(vector<int>& nums) {
        // int max =0;
        // for(int num: nums){
        //     if(num > max){
        //         max = num;
        //     }
        // }
        int max = *max_element(nums.begin(), nums.end());
            int total_moves = 0;
            for(int num : nums) {
            total_moves += (max - num);
        }
        
        return total_moves;
    }    
};
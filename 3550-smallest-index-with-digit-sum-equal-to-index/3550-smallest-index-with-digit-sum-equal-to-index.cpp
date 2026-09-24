class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       for(int i=0; i< nums.size(); i++){
            int sum =0;
            int x = nums[i];
            while(x > 0){
                int r = x % 10;
                sum += r;
                x /= 10;
            }
             if(i == sum){
                    return i;
                }
        }
        return -1;
    }
};
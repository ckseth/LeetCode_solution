class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1={nums[0]};
        vector<int> arr2={nums[1]};
        int i=2;
        for(;i<nums.size();i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
     arr1.insert(arr1.end(), arr2.begin(), arr2.end());
     return arr1;
    }
};
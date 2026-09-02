// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> seen;
//         for (int i = 0; i < nums.size(); ++i) {
//             int complement = target - nums[i]; 
//             if (seen.find(complement) != seen.end()) {
//                 return {seen[complement], i};
//             }
//             seen[nums[i]] = i;
//         }
//         return {};
//     }

// //-----Brute force-----
//     //  int n = nums.size();        
//     //     for (int i = 0; i < n; ++i) {
//     //         for (int j = i + 1; j < n; ++j) {
//     //             if (nums[i] + nums[j] == target) {
//     //                 return {i, j};
//     //             }
//     //         }
//     //     }
//     //     return {};
//     // }



// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> a;

        for(int i = 0; i < nums.size(); i++)
            a.push_back({nums[i], i});

        sort(a.begin(), a.end());

        int l = 0, r = a.size() - 1;

        while(l < r) {
            int sum = a[l].first + a[r].first;

            if(sum == target)
                return {a[l].second, a[r].second};
            else if(sum < target)
                l++;
            else
                r--;
        }

        return {};
    }
};
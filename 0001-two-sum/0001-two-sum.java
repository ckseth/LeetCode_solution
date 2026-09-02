class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [][] a = new int[nums.length][2];

        for (int i = 0; i < nums.length; i++) {
            a[i][0] = nums[i]; // value
            a[i][1] = i;       // original index
        }

        Arrays.sort(a, (x, y) -> Integer.compare(x[0], y[0]));

        int l = 0, r = a.length - 1;

        while (l < r) {
            int sum = a[l][0] + a[r][0];

            if (sum == target)
                return new int[]{a[l][1], a[r][1]};
            else if (sum < target)
                l++;
            else
                r--;
        }

        return new int[]{};
    }
}
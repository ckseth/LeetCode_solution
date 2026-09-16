class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        List<Integer> list = new ArrayList<>();
        java.util.Arrays.sort(nums);

        for(int i=0; i < nums.length; i++){
            if(nums[i]==target){
                list.add(i);
            }
        }
    return list;
    }
}
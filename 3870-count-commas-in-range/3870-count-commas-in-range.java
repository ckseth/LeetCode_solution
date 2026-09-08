class Solution {
    public int countCommas(int n) {
        // Numbers from 1 to 999 have 0 commas.
        // Every number from 1000 to n has exactly 1 comma.
        return Math.max(0, n - 999);
    }
}

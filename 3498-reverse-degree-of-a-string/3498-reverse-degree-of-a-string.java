class Solution {
    public int reverseDegree(String s) {
        int rev_deg =0;
        for(int i=0; i<s.length(); ++i){
            int rev_pos = 26 - (s.charAt(i)- 'a');
            rev_deg += rev_pos *(i + 1);
        }
        return rev_deg;
    }
}
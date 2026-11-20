class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start =0;
        for(int i=0; i<= n; i++){
            if(i ==n || s[i] == ' '){
                int left = start;
                int right = i-1;
                while(left < right){
                    char temp= s[left];
                    s[left] =  s[right];
                    s[right] = temp;
                    left++;
                    right--;
                }
                start = i+1;
            }
        }
        return s;
    }
};
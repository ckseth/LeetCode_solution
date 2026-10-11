class Solution {
public:
    string largestEven(string s) {
        int lastIdx =-1;

        for (int i=0; i< s.length(); i++){
            if(s[i]=='2'){
                lastIdx =i;
            }
        }
        
        if(lastIdx == -1){
            return "";
        }
        return s.substr(0, lastIdx +1);
    }
};
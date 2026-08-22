class Solution {
public:
    bool checkDivisibility(int n) {
        int digit_sum=0;
        int digit_product=1;
        int x=n;
        while(x>0){
            int r=x%10;
            digit_sum+=r;
            digit_product*=r;
            x/=10;
        }
        if(n%(digit_sum+digit_product)==0){
            return true;
        }
        return false;   
    }
};
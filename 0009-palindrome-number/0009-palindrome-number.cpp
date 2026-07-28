class Solution {
public:
    bool isPalindrome(int x) {
        int dupli=x,rem,ans=0;
        while(x>0){
            rem=x%10;
            x=x/10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return 0;
            ans=ans*10+rem;
        }
        if (dupli==ans)
        return true;
        else
        return false;
    }
};
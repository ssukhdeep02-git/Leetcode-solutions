class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0 || (x%10 == 0 && x!=0) )
       return 0;

        long long reversed = 0;
        int remainder = 0;

       while(x>reversed)
       {
            remainder = x%10;
            reversed = (reversed * 10) + remainder;
            x=x/10;
       }

       return x == reversed || x == reversed/10;
    }
};
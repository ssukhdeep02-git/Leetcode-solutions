class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)
       return 0;

        int original = x;
        long long reversed = 0;
        int remainder = 0;

       while(x)
       {
            remainder = x%10;
            reversed = (reversed * 10) + remainder;
            x=x/10;
       }

       return original == reversed;
    }
};
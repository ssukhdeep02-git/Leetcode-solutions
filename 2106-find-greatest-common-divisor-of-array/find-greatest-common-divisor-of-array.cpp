class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();

        int maxi = INT_MIN, mini = INT_MAX;

        for(int i=0; i<n; i++)
        {
            if(nums[i]>maxi)
            maxi = nums[i];

            if(nums[i]<mini)
            mini = nums[i];
        }

        
        while(mini>0 && maxi>0)
        {
            if(maxi>mini)
            maxi %= mini;
            else
            mini %= maxi;
        }

        if(maxi == 0)
        return mini;
        else return maxi;
    }
};
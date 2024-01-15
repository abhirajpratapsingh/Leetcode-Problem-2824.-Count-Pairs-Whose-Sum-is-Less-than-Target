class Solution {
public:
    int countPairs(vector<int>& nums, int target) 
    {
        int i=0;
        int j;
        int count=0;
        while(i<nums.size())
        {
            j=i+1;
            while(j<nums.size())
            {
                if(nums[i]+nums[j]<target)
                    count++;
                j++;
            }
            i++;
        }    
        return count;
    }
};

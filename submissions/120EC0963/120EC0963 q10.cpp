class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int c=0,pos;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                c++;
                pos=i;
                break;
            }
        }
        if(c!=0)
            return pos;
        return -1;
    }
};

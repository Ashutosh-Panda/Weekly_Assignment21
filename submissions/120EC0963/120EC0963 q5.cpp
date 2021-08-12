class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out ((int) nums.size(), 1);
        int run_pre = 1, run_post = 1;
        for(int i = 0; i < (int) nums.size(); i++) 
        {
            out[i] = run_pre;
            run_pre *= nums[i];
        }
        for(int i = (int) nums.size()-1; i >= 0; i--)
        {
            out[i] *= run_post;
            run_post *= nums[i];
        }
    return out;
    }
};

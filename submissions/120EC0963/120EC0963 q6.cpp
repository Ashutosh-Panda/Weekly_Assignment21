int solve(vector<int>& nums) {
    vector<int>a;
    int n=nums.size();
    for(int i=0;i<n;i++)
    a.push_back(nums[i]);
    //vector<int>b=nums;
    sort(a.begin(),a.end());
    //sort(b.begin(),b.end());
    //reverse(b.begin(),b.end());
    int s1=0,s2=0;
    //int n=nums.size();
    for(int i=0;i<n;i++)
    {
        s1+=abs(a[i]-nums[i]);
        s2+=abs(a[n-i-1]-nums[i]);
    }
    if(s1>s2)
    return (s2);
    else
    return (s1);
}

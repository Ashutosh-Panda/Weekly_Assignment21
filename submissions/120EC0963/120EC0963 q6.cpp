class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>s1,t1;
        string s2,t2;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='#')
            {
                if(!s1.empty())
                s1.pop_back();
            }
            else
                s1.push_back(s[i]);
        }
        n=t.length();
        for(int i=0;i<n;i++)
        {
            if(t[i]=='#')
            {
                if(!t1.empty())
                t1.pop_back();
            }
            else
                t1.push_back(t[i]);
        }
        if(s1.size()!=t1.size())
            return false;
        else
        {
            n=s1.size();
            for(int i=0;i<n;i++)
            {
                s2+=s1[i];
                t2+=t1[i];
            }
        }
        if(t2==s2)
            return true;
        return false;
    }
};

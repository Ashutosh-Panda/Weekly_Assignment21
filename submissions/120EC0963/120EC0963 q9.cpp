int solve(string s) {
    stack<char>c;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='(')
        c.push(ch);
        else
        {
            if(c.empty())
            c.push(')');
            else
            {
            if(ch==')' && c.top()=='(')
            c.pop();
            else
            c.push(')');
            }
        }
    }
    return c.size();
}

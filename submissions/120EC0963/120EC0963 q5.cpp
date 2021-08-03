vector<int> solve(vector<int>& a, vector<int>& b) {
    int n1=a.size();
    int n2=b.size();
    vector<int>c;
    n1--,n2--;
    for(int i=0;;i++)
    {
        if(n1!=-1 && n2!=-1)
        {
        if(a[n1]>b[n2])
        c.push_back(a[n1--]);
        else
        c.push_back(b[n2--]);
        }
        else if(n2!=-1)
        c.push_back(b[n2--]);
        else if(n1!=-1)
        c.push_back(a[n1--]);
        else
        break;
        //cout<<c[i]<<"\n";
    }
    reverse(c.begin(),c.end());
    return c;
}

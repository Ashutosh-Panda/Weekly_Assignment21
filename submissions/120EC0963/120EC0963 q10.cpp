// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> a;
        int n=x.length();
        for(int i=0;i<n;i++)
        {
            char ch=x[i];
            if(ch=='(' || ch=='{' || ch=='[')
            a.push(ch);
            else
            {
                if(a.empty())
                return false;
                else
                {
                    if(ch==')' && a.top()=='(')
                    a.pop();
                    else if(ch=='}' && a.top()=='{')
                    a.pop();
                    else if(ch==']' && a.top()=='[')
                    a.pop();
                    else
                    return false;
                }
            }
        }
        if(a.empty())
        return true;
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends

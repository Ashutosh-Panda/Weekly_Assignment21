#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	string s1,s2;
	cin>>s1>>s2;
	if(s1.length()!=s2.length())
	{
	    cout<<"NOT ROTATION"<<"\n";
	}
	else
	{
	    s1=s1+s1;
	    if(s1.find(s2)!=string::npos)
	    cout<<"ROTATION"<<"\n";
	    else
	    cout<<"NOT ROTATION"<<"\n";
	}
	return 0;
}

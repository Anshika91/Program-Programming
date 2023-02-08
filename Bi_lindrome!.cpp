#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int> m;
	    for(int i = 0; i<s.length(); i++)
	    {
	        m[s[i]]++;
	    }
	    bool count = false;
	    for(auto i: m)
	    {
	        if(i.second>=2)
	        {
	            count = true;
	            break;
	        }
	    }
	    if(count)
	    {
	        cout<<s.length() - 2<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
	
	return 0;
}

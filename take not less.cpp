#include <iostream>
#include <map>
using namespace std;

// using recursive method
void solve(int a[] , int n)
{
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[a[i]]++;
    }
    bool nooutput=false;
    for(auto it = m.rbegin(); it!=m.rend();it++)
    {
        if(it->second%2!=0)
        {
            cout<<"Marichka"<<endl;
            nooutput=true;
            break;
        }
    }
    if(!nooutput)
    {
        cout<<"Zenyk"<<endl;
    }
}

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    solve(a,n);
	}
}

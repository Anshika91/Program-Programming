#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    int m = 101;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        m=min(m,a[i]);
	    }
	    int ans = 0;
	    for(int i =0; i<n; i++)
	    {
	        if(a[i]!=m)
	        ans++;
	    }
	    	cout<<ans<<endl;
	}
	return 0;
}

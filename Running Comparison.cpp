#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    int ans=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        if(a[i] > b[i])
	        {
	            if(a[i]<= 2*b[i])
	            {
	                ans++;
	            }
	        }
	        else if(a[i] < b[i])
	        {
	            if(2*a[i] >= b[i])
	            {
	                ans++;
	            }
	        }
	        else
	        ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

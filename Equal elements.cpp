#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    unordered_map<long long int, long long int> m;
	    for(int i=0; i<n; i++)
	    {
	        m[a[i]]++;
	    }
	    
	    long long int max_equal_elements = 0;
	    for(auto i:m)
	    {
	        max_equal_elements = max(max_equal_elements,i.second);
	    }
	    if(max_equal_elements!=0)
	    cout<<n-max_equal_elements<<endl;
	    else
	    cout<<n-1<<endl;
	}
	return 0;
}

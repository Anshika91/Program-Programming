#include <iostream>
using namespace std;
#include<map>
const int MOD = 1e9+7;
#define ll long long 

void solve(int a[], int n)
{
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[a[i]]++;
    }
    
    ll ans = 0; 
    ll prev = 1;
    for(int i = 1; i<=n; i++)
    {
        ll temp = prev*m[i];
        temp %= MOD;
        ans += temp;
        prev = temp;
        ans %= MOD;
    }
    
    cout<<ans<<endl;
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
	    {
	        cin>>a[i];
	    }
	    solve(a,n);
	}
	return 0;
}

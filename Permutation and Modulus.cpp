#include <iostream>
using namespace std;

// solving the problme using recursive method

void solve(int n)
{
    for(int i = 2; i<=n; i++)
        cout<<i<<" ";
        cout<<1<<endl;
}

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int n;
	    cin>>n;
	    solve(n);
	}
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int h,x,y;
	    cin>>h>>x>>y;
	    h = h-y;
	    if(h%x==0)
	    {
	        cout<<1+h/x<<endl;
	    }
	    else
	    {
	        cout<<2 + h/x<<endl;
	    }
	}
	return 0;
}

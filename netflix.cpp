#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int anshii;
	cin>>anshii;
	while(anshii--)
	{
	    int A,B,C,X;
	    cin>>A>>B>>C>>X;
	    int AB = A+B;
	    int BC = B+C;
	    int AC = A+C;
	    
	    if(AB >= X || BC >= X || AC >= X)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

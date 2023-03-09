#include <iostream>
using namespace std;
int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int m,n,k;
	       cin>>m>>n>>k;
	       int s=n*k;
	       if(s<m)
	       {
	           cout<<"yes"<<endl;
	       }
	       else
	       {
	           cout<<"no"<<endl;
	       }     	       
	   }
	return 0;
}

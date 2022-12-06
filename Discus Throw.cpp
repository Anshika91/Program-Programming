#include<iostream>
#include<cmath>
using namespace std;
#define anshi()  int T;  cin>>T; while(T--)

int main() {
	// your code goes here
	anshi(){
	int a,b,c;
	cin>>a>>b>>c;
	int high = max(a,b);
	int ans = max(high,c);
	cout<<ans<<endl;
	}
	return 0;
}

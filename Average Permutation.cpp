#include <iostream>
using namespace std;

int main() {
	int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        if(N%2==0)
        {
            for(int i=N-1;i>=1;i-=2)
                cout<<i<<" ";
            for(int i=2;i<=N;i+=2)
                cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            for(int i=N;i>=1;i-=2)
                cout<<i<<" ";
            for(int i=2;i<=N-1;i+=2)
                cout<<i<<" ";
            cout<<endl;
        }
    }
	return 0;
}

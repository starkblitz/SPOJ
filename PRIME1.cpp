#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	short int t, flag;
	cin>>t;
	unsigned long  long int m, n, i, j;
	while(t--)
	{
		cin>>m>>n;
		for(i=m; i<=n; i++)
        {
            flag=1;
            if(i==1) flag=0;
            else if(i==2) flag=1;
            else if(i==3) flag=1;
            else
            for(j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if (flag==1) cout<<i<<endl;
        }
	}
	return 0;
}

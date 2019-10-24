#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define pb push_back
using namespace std;

//global here

//function here

//main here
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		int gaR = 0;
		int geO = 0;
		for (int i = 0; i < n; ++i)
		{
			string data;
			cin>>data;
			if(data.size() %2 == 1){
				gaR++;
			}
			for (int j = 0; j < data.size(); ++j)
			{
				if(data[j] == '1'){
					geO++;
				}
			}
		}
		if(geO % 2 == 0){
			cout<<n<<endl;
		}
		else{
			if(gaR >=1){
				cout<<n<<endl;
			}
			else{
				cout<<n-1<<endl;
			}
		}

	}

	return 0;
}

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define sp " "

#define pb push_back
#define mp make_pair 

#define FORIN for(int i = 0;i < n;i++)cin >> arr[i];
#define FOR for(int i = 0;i < n;i++)

#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;

#define B begin()
#define E end()

#define F first
#define S second

///TYPEDEF/////
typedef long long int ll;
typedef unsigned long long int ull;

typedef vector<int> v;
typedef vector<long, long> vl;


typedef pair<int, int> pi;
typedef pair<long, long> pl;

typedef map<int, int> mi;
typedef map<string, int> msi;

void solve()
{
	long long int n;
	cin >> n;
	if(n % 2 == 0)
	{
		cout << (long long)pow(2, (n/2)) << nl;
	}
	else
	{
		cout << 0 << nl;
	}
}

int main()
{
	FIO
	int T = 1;
	//cin >> T;
	
	while(T--)
	{	
		solve();	
	}
	return 0;
}

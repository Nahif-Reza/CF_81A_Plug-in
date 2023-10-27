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
typedef unsigned long long int llu;

typedef vector<int> v;
typedef vector<long, long> vl;


typedef pair<int, int> pi;
typedef pair<long, long> pl;

typedef map<int, int> mi;
typedef map<string, int> msi;

void solve()
{
	int k;
	string s;
	cin >> s >> k;
	int arr[150] = {0};
	char c = 'a';
	for(int i = 0;i < 26;i++)
	{
		cin >> arr[(int)c];
		c++;
	}
	int sum = 0;
	int mul = 1;
	for(int i = 0;i < s.size();i++)
	{
		sum += (mul)*arr[(int)s[i]];
		mul++;
	}
	sort(arr, arr+150, greater<int>());
	for(int i = 0;i < k;i++)
	{
		sum += arr[0] * mul;
		mul++;
	}
	cout << sum << nl;
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

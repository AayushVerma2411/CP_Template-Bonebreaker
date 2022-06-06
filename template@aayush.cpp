#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
typedef long long ll;
typedef unsigned long long int ull;
typedef long double lld;
typedef vector<ll> vll;
typedef priority_queue<ll, vll, greater<ll>> mn_pq;
#define loop(i, v, b, k) for (ll i = v; i < b; i = i + k)
#define all(v) v.begin(), v.end()
#define sz(x) ((int)(x).size())
#define cntpop(x) __builtin_popcountll(x)
#define gsort(n) sort(all(n), greater<ll>())
#define Sort(n) sort(all(n));
#define INF 1e18
#define rep(i, n) for (ll i = 0; i < n; i++)
#define pb push_back
#define sp " "
#define endl "\n"
#define mll map<ll, ll>
#define mcl map<char, ll>
#define mstrl map<string, ll>
#define pll pair<ll, ll>
#define yup cout << "YES" << endl
#define nope cout << "NO" << endl
#define ff first
#define ss second
const int mod = 1000000007;
const int N = 1e5 + 10;
#define mod2 998244353
#define fast                          \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);

#define testcase \
	ll t;        \
	cin >> t;    \
	while (t--)

#ifndef ONLINE_JUDGE
#define debug(n)       \
	cerr << #n << " "; \
	_print(n);         \
	cerr << endl;
#else
#define debug(n)
#endif

void _print(int t)
{
	cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
void _print(ll t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T, class V>
void _print(multimap<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
	cerr << "{";
	_print(p.ff);
	cerr << ",";
	_print(p.ss);
	cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(set<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
	cerr << "[ ";
	for (auto i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T, class V>
void _print(multimap<T, V> v)
{
	cerr << "[ ";
	for (auto i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
ll binEXP(ll v, ll b) // for v<=1e18 and b<=1e9;
{
	v = v % mod;
	ll ans = 1;
	while (b)
	{
		if (b & 1)
		{
			ans = (ans * 1LL * v) % mod;
		}
		v = (v * 1LL * v) % mod;
		b >>= 1;
	}
	return ans;
}

ll power(ll n, ll y)
{
	ll res = 1;

	while (y > 0)
	{
		if (y & 1)
			res = (res * n);
		y = y >> 1;
		n = (n * n);
	}
	return res;
}

ll modInv(ll i, ll mod)
{
	return power(i, mod - 2);
}

#define mkgraph(adj, n) \
	rep(i, n)           \
	{                   \
		ll a, b;        \
		cin >> a >> b;  \
		adj[a].pb(b);   \
		adj[b].pb(a);   \
	}

ll fact[30000];
ll gcd(ll v, ll b) { return b ? gcd(b, v % b) : v; }
ll ncr(ll n, ll r) { return (n >= r ? (fact[n] * modInv(fact[r], mod)) % mod * modInv(fact[n - r], mod) % mod : 0); }
ll lcm(ll v, ll b) { return (v * b) / gcd(v, b); }
bool comp(pll &a, pll &b)
{
	if (a.ss > 0 and b.ss > 0)
		return a.ff < b.ff;
	else
		return a.ss > b.ss;
}
void input(vll &v) { loop(i, 0, v.size(), 1) cin >> v[i]; }
void input1(vll &v, int n)
{
	loop(i, 0, n, 1)
	{
		int h;
		cin >> h;
		v.pb(h);
	}
}
void output(vll v)
{
	loop(i, 0, v.size(), 1) cout << v[i] << sp;
	cout << endl;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void solve()
{
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
signed main()
{
	clock_t start, end;
	start = clock();
#ifndef ONLINE_JUDGE
	freopen("Debug.txt", "w", stderr);
	freopen("input.txt", "r", stdin);
#endif
	fast
		testcase
		solve();
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cerr << "Time: " << time_taken << " sec";
	return 0;
}
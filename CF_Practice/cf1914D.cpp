/*
Problem Name:
Problem Link:
Author: Arijit Kar (DemonicAK)
*/
//----------HEADER----------
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
//----------MACROS----------
typedef long long ll;
#define ll long long
#define ull unsigned long long
#define ld long double
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef unordered_map<int, int> umpi;
typedef unordered_map<ll, ll> umpll;
typedef unordered_map<int, pii> umpipi;
typedef unordered_map<int, vi> umpivi;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;
typedef unordered_set<pii> uspi;
typedef unordered_set<pll> uspll;
typedef unordered_set<string> usstr;
typedef map<int, int> mpi;
typedef map<ll, ll> mpll;
typedef map<int, pii> mppi;
typedef map<int, vi> mpvi;
typedef set<int> si;
typedef set<ll> sll;
typedef set<pii> spi;
typedef set<pll> spll;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
template <typename T>
using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//----------LOOPS----------
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define forn(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define forne(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define ford(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define forsq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define forc(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define foreach(a, b) for (auto &(a) : (b))
#define rep(i, n) forn(i, 0, n)
#define repn(i, n) forne(i, 1, n)
#define tc(t) while (t--)
// ----------INPUT/OUTPUT----------
template <typename... T>
void see(T &...args) { ((cin >> args), ...); }
#define seea(a, x, y)           \
    for (int i = x; i < y; i++) \
    {                           \
        cin >> a[i];            \
    }
#define seev(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define sees(s, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        s.insert(x);            \
    }
template <typename... T>
void put(T &&...args) { ((cout << args << " "), ...); }
template <typename... T>
void putl(T &&...args)
{
    ((cout << args << " "), ...);
    cout << '\n';
}
//----------operations----------
#define maxoff(a, b) a = max(a, b)
#define minoff(a, b) a = min(a, b)
#define sqr(x) ((ll)(x) * (x))

#define all(v) v.begin(), v.end()
#define allarr(arr, sz) arr, arr + sz
#define sortall(v) sort(all(v))
#define reverseall(v) reverse(all(v))
#define sortarr(arr, sz) sort(allsz(arr, sz))
#define reversearr(arr, sz) reverse(allsz(arr, sz))
#define binarysearch(arr, sz, val) (lower_bound(all(arr), val) - arr)
#define sz(x) ((ll)(x).size())
#define permute next_permutation

#define pb push_back
#define F first
#define S second
#define mp make_pair
//----------DEBUGGING----------
#define error(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << "=" << a << ", ";
    err(++it, args...);
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef DemonicAK_DEBUG
#define DEBUG fprintf(stderr, "====TESTING====: File: %s, Line: %d, Function: %s\n", __FILE__, __LINE__, __PRETTY_FUNCTION__), fflush(stderr)
#define dbg(...) cerr << "(" << #__VA_ARGS__ << ") : ", dbg_out(__VA_ARGS__), fflush(stderr)
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl, fflush(stderr)
#define debug(...) cerr << '[' << __FILE__ << ':' << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__), fflush(stderr)
#define debugm(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#else
#define DEBUG
#define dbg(...)
#define VALUE(x)
#define debug(...)
#define debugm(...)
#endif
// --------IMP-------
#define RESET(a, b) memset(a, b, sizeof(a))
#define clr(x) memset(x, false, sizeof(x))
#define gc getchar_unlocked
#define setpr(x) cout << setprecision(x) << fixed
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//----------CONSTANTS----------
const ld PI = acos(-1);
const ld EPS = 1e-9;
const int INF = INT_MAX;
const long long INFF = LONG_LONG_MAX;
#define mod 1000000007 // 1e9+7
ll MOD = 998244353;
#define infL 1e18
const int inf = 1e9;
const int mxN = 1e5 + 7; // row
const int mxM = 1e5 + 7; // col
int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};

//----------GLOBALS----------
void usaco(string filename = "")
{
    if (filename.size() > 0)
    {
#ifndef ONLINE_JUDGE
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
#endif
    }
    else
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
#endif
    }
}
inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

inline string GetString(void)
{
    char x[1000005];
    scanf("%s", x);
    string s = x;
    return s;
}

inline string uppercase(string s)
{
    int n = s.size();
    rep(i, n) if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}

inline string lowercase(string s)
{
    int n = s.size();
    rep(i, n) if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}
const int N = 5;
const int M = 1e5 + 4;
int dp[N][M] = {0};

//----------SOLUTION----------

vi best3(vi &a)
{
    int mx1 = -1, mx2 = -1, mx3 = -1;

    rep(i, a.size())
    {
        if (mx1 == -1 or a[i] > a[mx1])
        {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if (mx2 == -1 or a[i] > a[mx2])
        {
            mx3 = mx2;
            mx2 = i;
        }

        else if (mx3 == -1 or a[i] > a[mx3])
        {
            mx3 = i;
        }
    }

    return {mx1, mx2, mx3};
}
void solve()
{
    DEBUG;
    int n, m = 3; // n is col here m is rows
    see(n);
    // mxn mtrix as ip
    vvi f(m, vi(n, 0));
    rep(i, m) rep(j, n) see(f[i][j]);

// best 3 days for each activity (as there is only 3 days and 3 activities to conflict)
    auto best3a = best3(f[0]);
    auto best3b = best3(f[1]);
    auto best3c = best3(f[2]);
    int ans = INT_MIN;

    rep(i, 3) rep(j, 3) rep(k, 3)
    {
        // x y z are best days
        int x = best3a[i], y = best3b[j], z = best3c[k];

        // check if x y z are dont conflict  we can  check for max value
        if (x != y and y != z and x != z)ans = max(ans, f[0][x] + f[1][y] + f[2][z]);
        
    }

    cout << ans << endl;
}
//----------MAIN----------
int32_t main()
{
    fastIO;
    usaco();
    int T = 1;
    cin >> T;
    tc(T)
    {
        solve();
        cout << '\n';
    }
    return 0;
}
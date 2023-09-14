#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
//  https://codeforces.com/problemset/problem/1559/A
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
// end of template

void solve(int t)
{
int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++)cin>>a[i];

// print one integer — the minimal value of the maximum value in the sequence.
int res = a[0];
for (int i = 1; i < n; i++)
    res &= a[i];
cout << res << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    usaco();

    int T = 1;
    cin >> T;

    while (T--)
    {
        solve(T);
    }
    return 0;
}
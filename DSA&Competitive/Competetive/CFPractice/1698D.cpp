#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
using namespace std;
// using namespace __gnu_pbds;

// Declaring Ordered Set
// template <class T>
// using oset = tree<T, null_type, less<T>, rb_tree_tag,
//                   tree_order_statistics_node_update>;
// using namespace std;
using ll = long long;
using ll = long long;
ll mod = 1e9 + 7;
double epsilon = 1e-6;
#define psb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define mp make_pair
#define prDouble(d) cout << fixed << setprecision(10) << d
void setIO(string name = "")
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); // see Fast Input & Output
    if (sz(name))
    {
        freopen((name + ".in").c_str(), "r", stdin); // see Input & Output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
ll get_sum(vector<ll> &a)
{
    ll sm = 0;
    sm = accumulate(a.begin(), a.end(), sm);
    return sm;
}
void print()
{
    cout << endl;
}
// Variadic function Template that takes
// variable number of arguments and prints
// all of them.
template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    cout << var1 << ' ';
    print(var2...);
}
void simple_tokenizer(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }
}
inline long long mpow(long long b, long long ex)
{
    if (b == 1)
        return 1;
    long long r = 1;
    while (ex)
    {
        if (ex & 1)
            r = (r * b) % mod;
        ex = ex >> 1;
        b = (b * b) % mod;
    }
    return r;
}
pair<ll, ll> maxSum(vector<ll> &v, int l, int r)
{
    ll max_so_far = INT_MIN, max_ending_here = 0,
       start = 0, end = 0, s = 0;
    for (int i = l; i < r; i++)
    {
        max_ending_here += v[i];
        if (max_ending_here > max_so_far)
        {
            start = s;
            end = i;
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0)
        {
            s = i + 1;
            max_ending_here = 0;
        }
    }
    return {start, end};
}

vector<ll> query(int l, int r)
{
    cout << "? " << l << " " << r;
    cout << endl;
    cout.flush();
    cout << endl;
    int num = r - l + 1;
    vector<ll> res(num);
    for (int i = 0; i < num; i++)
        cin >> res[i];

    return res;
}

int main()
{
    setIO();
    int t = 1;
    cin >> t;
    // t=1;
    while (t--)
    {
        ll n;
        cin >> n;
        int mi = 0, ma = n - 1;
        while (mi + 1 < ma)
        {
            // print(mi, ma);
            int mid = (mi + ma) / 2;
            int l = mi + 1;
            int r = mid + 1;
            vector<ll> res = query(mi + 1, mid + 1);
            int cnt = 0;
            for (int i = 0; i < res.size(); i++)
            {
                if (res[i] <= r && res[i] >= l)
                {
                    cnt++;
                }
            }
            if (cnt % 2)
            {
                ma = mid;
            }
            else
            {
                mi = mid;
            }
        }
        int mid = (mi + ma) / 2;
        if (mi == mid)
        {
            ll ans = query(mi + 1, mid + 1)[0];
            cout << "! " << ans<<endl;
        }
        else
        {
            cout << 2 << endl;
        }
        cout.flush();
    }
    return 0;
}
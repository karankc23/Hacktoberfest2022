#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll lis(ll a[], ll n)
{
    vector<ll> v;
    v.push_back(a[0]);

    for (long long i = 1; i <= n - 1; i++)
    {
        if (a[i] > v.back())
        {
            v.push_back(a[i]);
        }
        else
        {
            ll ind = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
            v[ind] = a[i];
        }
    }
    return v.size();
}

int main()
{
    std::ios::sync_with_stdio(false), cin.tie(__null), cout.tie(__null);

    ll n;
    cin >> n;
    ll a[n];
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    cout << lis(a, n);

    return 0;
}

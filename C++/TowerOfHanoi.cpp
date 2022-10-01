#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<pair<char, char>> v;
void toh(ll n, char source, char helper, char destination)
{
    if (n == 1)
    {
        v.push_back({source, destination});
        return;
    }

    toh(n - 1, source, destination, helper);

    v.push_back({source, destination});

    toh(n - 1, helper, source, destination);
}

int main()
{
    ll x;
    cin >> x;

    toh(x, '1', '2', '3');

    cout << v.size() << endl;

    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
}

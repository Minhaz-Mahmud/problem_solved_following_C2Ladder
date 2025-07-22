#include <bits/stdc++.h>
#include <cmath>
#define ll long long int

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (ll q = 0; q < t; q++)
    {
        ll n, k;
        cin >> n >> k;
        vector<array<ll, 3>> a;

        for (ll i = 0; i < n; i++)
        {
            ll x, y, z;
            cin >> x >> y >> z;
            if (k>=z)continue;
            a.push_back({x, z, y});
        }

        sort(a.begin(), a.end());

        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i][0] <= k && a[i][2] >= k)
            {
            
                    if(k < a[i][1])(k = a[i][1]);   
            }

            else if (a[i][0] > k)
            {
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}

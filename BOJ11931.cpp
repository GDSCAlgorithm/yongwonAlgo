#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

int a[1010101];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+n+1,greater<int>());
    for(int i=1;i<=n;i++)
        cout << a[i] << '\n';
}
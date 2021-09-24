#include <bits/stdc++.h>
#define sws																\
	ios_base::sync_with_stdio(false);									\
	cin.tie(NULL);														\
	cout.tie(NULL);
#define endl '\n'

using namespace std;

typedef pair < int, string > pii;
typedef long long ll;
typedef pair < ll, ll > pll;

const ll INF = 1e9;
const ll MOD = 1000000007;
const ll MAX = 100005;

ll n, a, b;
vector < ll >cheques;
int tab[101][200005];
ll dp(ll i = 0, ll valor = 0) {
	if (i >= n or valor > b)
		return 0;
	if (tab[i][valor] != -1) 
		return tab[i][valor];
	ll foi = 0;
	if (valor + cheques[i] >= a and valor + cheques[i] <= b)
		foi++;
	ll pega = foi + dp(i + 1, valor + cheques[i]);
	ll nao_pega = dp(i + 1, valor);
	return tab[i][valor] = ( pega%MOD + nao_pega%MOD )%MOD;
}

int main() {
	sws;
	cin >> n >> a >> b;
	memset(tab, -1, sizeof(tab));
	for (int i = 0; i < n; i++) {
		ll tmp;
		cin >> tmp;
		cheques.push_back(tmp);
	}
	cout << dp() << endl;
}

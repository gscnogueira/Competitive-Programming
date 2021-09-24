#include <bits/stdc++.h>
#define sws																\
	ios_base::sync_with_stdio(false);									\
	cin.tie(NULL);														\
	cout.tie(NULL);
#define endl '\n'

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;

const ll INF = 1e9;
const ll MOD = 998244353;
const ll MAX = 100005;

vector<int> estrada[MAX];
vector<int> trem[MAX];
vector<int> values(MAX);
bool visited[MAX];

double imc(double h, double m) {
  h/=100;
  return m/(h*h);
}
bool aceitavel(double imc) {
  return(imc>= 18.5 and imc<= 24.9 );
}
int main() {
  sws;
  int bp, ap;
  scanf("%d.%d", &bp, &ap);
  int h = 100*bp + ap;
  // cout<<"h:"<<h<<endl;
  // cout<<"ap:"<<ap<<endl;
  auto vimc = imc(h,ap );
  // cout<<"imc:"<<vimc<<endl;
  if(aceitavel(vimc)){
	puts("Sim");
  }
  else puts("Nao");
}

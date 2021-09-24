#include <bits/stdc++.h>
#define sws																\
	ios_base::sync_with_stdio(false);									\
	cin.tie(NULL);														\
	cout.tie(NULL);
#define endl '\n'

using namespace std;

typedef pair<int, string> pii;
typedef long long ll;
typedef pair<ll, ll> pll;

const ll INF = 1e9;
const ll MOD = 998244353;
const ll MAX = 100005;

double imc(double h, double m) {
  h/=100;
  return m/(h*h);
}
bool aceitavel(double imc) {
  return(imc>= 18.5 and imc<= 24.9 );
}
int main(){
  sws;
  ll n, m;
  cin>>n>>m;
  ll sum = 0;
  vector<ll> v(n);
  for(int i = 0; i < n; i++)
	cin>>v[i];
  for(int i = 0; i < m; i++){
	sum+=v[i];
  }
  printf("%.8lf\n", ((double) sum)/m);
  for(int i = 0; i < n-m; i++ ){
	sum-=v[i];
	sum+=v[i+m];
	// cout<<"tirou "<< v[i]<<endl;
	// cout<<"botou "<< v[i+m]<<endl;
	printf("%.8lf\n", ((double) sum)/m);
  }
}

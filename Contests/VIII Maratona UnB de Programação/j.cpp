#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
#include <string>
#include <ctype.h>
#include <set>
#define pii pair<int,string>
using namespace std;

int main(){
    int N,i;
    char letra;
    map<char,int> mapa;
    string A;
    vector<int> vetor2(200002,0);
    mapa['R'];
    mapa['P'];
    mapa['S'];
    cin >> N;
    for(i = 0;i < N;++i){
        cin >> letra;
        A.push_back(letra);
        mapa[letra]++;
    }
    int comp = 0;
    for(i = 0;i <N;++i){
        if(A[i] == 'R'){
            vetor2[i] += mapa['S'];
            vetor2[i] -= mapa['P'];
        }
        else if(A[i] == 'P'){
            vetor2[i] += mapa['R'];
            vetor2[i] -= mapa['S'];
        }
        else{
            vetor2[i] += mapa['P'];
            vetor2[i] -= mapa['R'];
        }
        if(vetor2[i] > comp){
            comp = vetor2[i];
        }
    }
    int res = 0;
    for(i = 0;i < N;++i){
        if(vetor2[i] == comp){
            ++res;
        }
    }
    cout << res << "\n";
    return 0;
}

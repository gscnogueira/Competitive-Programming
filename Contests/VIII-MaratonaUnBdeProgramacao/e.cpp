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
    map<string,int> mapa;
    set<pii> conj;
    string A,B;
    int N,i,j,comp = 0;
    cin >> N;
    mapa["Aritmetica"];
    mapa["Backtracking"];
    mapa["Bigint"];
    mapa["Combinatoria"];
    mapa["Estruturas de Dados"];
    mapa["Geometria"];
    mapa["Ordenacao"];
    mapa["Programacao Dinamica"];
    mapa["SegTrees"];
    mapa["Teoria dos Numeros"];
    mapa["Travessia em Grafos"];
    mapa["Algebra"];
    getchar();
    while(N--){
        getline(cin,A);
        i = 0;
        while(i < A.size()){
            for(i = i;A[i] != ','&&i < A.size();++i){
                B.push_back(A[i]);
            }
            mapa[B]++;
            if(mapa[B] > comp){
                comp = mapa[B];
            }
            B.clear();
            if(A[i] == ','){
                ++i;
            }
        }

    }
    pii aux;
    int var;
    for(auto& p : mapa){
        aux.first = p.second;
        aux.second = p.first;
        var = 0;
        var += 100;
        var *= aux.first;
        var /= comp;
        if((100-var) > 25){
            conj.insert(aux);
        }
    }
    if(!conj.empty()){
        for(auto& p : conj){
            cout << "Falta " << p.second << "!\n";
        }
    }
    else{
        cout << "Tudo em Ribas!\n";
    }
    return 0;
}

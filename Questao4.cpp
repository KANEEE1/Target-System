#include <bits/stdc++.h>

using namespace std;

void percentualMensalEstados(){
    unordered_map<string, double> faturamentoPorEstado = {{"SP", 67836.43}, {"RJ", 36678.66}, {"MG", 29229.88}, {"ES", 27165.48}, {"Outros", 19849.53}};
    double somaTotal = 0;
    
    for(auto& estado : faturamentoPorEstado){
        somaTotal += estado.second;
    }

    cout << fixed << setprecision(2);
    cout << "Percentual de representação por estado:" << endl;

    for(auto& estado : faturamentoPorEstado){
        double percentual = 100*(estado.second/somaTotal);
        cout << "Estado: " << estado.first << " - Percentual: " << percentual << endl; 
    }
    
}

int main(){
    percentualMensalEstados();

    return 0;
}

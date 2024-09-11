#include <bits/stdc++.h>
#include <fstream>
#include <sstream>

using namespace std;

struct DiaFaturamento {
    int dia;
    double valor;
};

void analisarFaturamento(vector<DiaFaturamento>& dados) {
    vector<double> valores;

    for (auto& item : dados) {
        if (item.valor > 0) {
            valores.push_back(item.valor);
        }
    }

    if (valores.empty()) {
        cout << "Não há dados de faturamento para calcular." << endl;
        return;
    }

    double menor_valor = valores[0];
    double maior_valor = valores[0];
    double soma = 0.0;
    for (double valor : valores) {
        if (valor < menor_valor) menor_valor = valor;
        if (valor > maior_valor) maior_valor = valor;
        soma += valor;
    }
    
    double media_mensal = soma / valores.size();
    
    int dias_acima_da_media = 0;
    for (double valor : valores) {
        if (valor > media_mensal) {
            dias_acima_da_media++;
        }
    }
    
    cout << "Menor valor de faturamento: " << menor_valor <<endl;
    cout << "Maior valor de faturamento: " << maior_valor << endl;
    cout << "Número de dias com faturamento acima da média: " << dias_acima_da_media << endl;
}


int main() {
    ifstream file("dados.json");
    Json::Value jsonData;
    file >> jsonData;
    
    vector<DiaFaturamento> dados;
    
    for ( auto& item : jsonData) {
        DiaFaturamento dia;
        dia.dia = item["dia"].asInt();
        dia.valor = item["valor"].asDouble();
        dados.push_back(dia);
    }
    
    analisarFaturamento(dados);
    
    return 0;
}
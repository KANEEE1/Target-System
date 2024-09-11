#include <bits/stdc++.h>

using namespace std;

void printaSoma(){
    int indice =13, soma = 0, k = 0;

    while(k < indice){
        k++;
        soma+= k;
    }

    cout << soma << endl;
}


int main(){
    printaSoma();

    return 0;
}
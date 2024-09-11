#include <bits/stdc++.h>

using namespace std;

bool isFibonacci(int n) {
    int a = 0, b = 1;

    if (n == a || n == b) {
        return true;
    }

    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }

    return b == n;

}

int main(){
   if(isFibonacci(1598)) cout << "Esse numero pertence à sequência." << endl;
   else cout << "Esse número não pertence à sequência." << endl;

    return 0;
}

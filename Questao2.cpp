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
   cout << isFibonacci(1597) << endl;

    return 0;
}

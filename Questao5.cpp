#include <bits/stdc++.h>

using namespace std;

string reverseString(string s){
    string reversed;
    int n = s.length();
    
    for(int i = n-1; i>=0; i--){
        reversed.push_back(s[i]);
    }
    
    return reversed;
}

int main(){
    string s = "Eae galera da Target, tranquilo?";
    
    cout << reverseString(s)<< endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux = 1;
    cin >> n;

    for(int i = 1; i <= n; i++){
        aux = aux * i;
    }

    cout << aux << '\n';

    return 0;
}
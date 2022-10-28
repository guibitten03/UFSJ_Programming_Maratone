#include <bits/stdc++.h>

using namespace std;

int main(){

    float n;
    cin >> n;
    string choice = "sim";

    for(float i = 2; i < n; i++){
        float aux = n / i;
        if((aux - (int)aux) == 0){
            choice = "nao";
            break;
        }
    }

    cout << choice << '\n';

    return 0;
}
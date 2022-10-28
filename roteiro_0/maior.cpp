#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> integers;
    long long int maior = LLONG_MIN;
    int index;

    for(int i = 0; i < 100; i++){
        cin >> integers[i];
        if(integers[i] > maior){
            maior = integers[i];
            index = i;
        }
    }

    cout << maior << '\n';
    cout << index << '\n';

    return 0;
}
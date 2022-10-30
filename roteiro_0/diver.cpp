#include <bits/stdc++.h>

using namespace std;

int main(){

    int go, come, count = 0;

    cin >> go >> come;

    int divers[come];
    int fault[go];

    for(int i = 0; i < go; i++){
        fault[i] = 0;
    }

    for(int i = 0; i < come; i++){
        cin >> divers[i];
        fault[divers[i] - 1] = 1;
    }

    for(int i = 0; i < go; i++){
        if(fault[i] == 0){
            cout << i + 1 << ' ';
            count++;
        }
    }

    if(count == 0){
        cout << "*";
    }
    cout << '\n';

    return 0;
}
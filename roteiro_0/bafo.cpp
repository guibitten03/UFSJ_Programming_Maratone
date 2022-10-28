#include <bits/stdc++.h>

using namespace std;

int main(){

    int count = 0;
    while(1){
        int a, b, in, aldo = 0, beto = 0;

        cin >> in;

        if(in == 0){ break; }

        count += 1;
        for(int i = 0; i < in; i++){
            cin >> a >> b;
            aldo += a; beto += b;      
        }

        if(aldo > beto){
            cout << "Teste " << count << '\n'; 
            cout << "Aldo\n";
            cout << '\n';
        }else{ 
            cout << "Teste " << count << '\n'; 
            cout << "Beto\n"; 
            cout << '\n';
        }
    }

    return 0;
}
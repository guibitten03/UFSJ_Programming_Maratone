#include <bits/stdc++.h>

using namespace std;

int main(){

    int inst = 1;

    while(1){
        int in, sum = 0;

        cin >> in;
        int n[in];

        for(int i = 0; i < in; i++){
            cin >> n[i];
        }

        if(1 == in){
            cout << "Instancia " << inst << '\n';
            cout << 0 << '\n';
            cout << '\n';
            inst++;
            continue;
        }else{
            for(int i = 0; i < in; i++){
                if(i == 0){
                    sum += n[i];
                    continue;
                }

                if(sum == n[i]){
                    cout << "Instacia " << inst << '\n';
                    cout << n[i] << '\n';
                    cout << '\n';
                    inst++;
                    break;
                }else{
                    sum += n[i];
                }
            }
        }

        
    }



    return 0;
}
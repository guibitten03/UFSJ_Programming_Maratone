#include <bits/stdc++.h>

using namespace std;

int main(){

    int in, count = 1;
    while(1){

        cin >> in;
        if(in == 0){ break;}

        string name1, name2;
        cin >> name1 >> name2;

        cout << "Teste " << count << '\n';
        int a, b, sum;
        for(int i = 0; i < in; i++){
            cin >> a >> b;
            sum = a + b;
            if(sum % 2 == 0){
                cout << name1 << '\n';
            }else{
                cout << name2 << '\n';
            }
        }
        cout << '\n';
        count += 1;
    }

    return 0;
}
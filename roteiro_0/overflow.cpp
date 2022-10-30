#include <bits/stdc++.h>

using namespace std;

int main(){

    int bigger, n1, n2, result, control = 0;
    char op;
    cin >> bigger >> n1;
    cin >> op;
    cin >> n2;

    switch(op){
        case '+':
            result = n1 + n2;
            if(result > bigger){control = 1;}
            break;
        
        case '*':
            result = n1 * n2;
            if(result > bigger){control = 1;}
            break;
        
    }

    if(control){cout << "OVERFLOW\n";}
    else{cout << "OK\n";}

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){

    float x, y;
    cin >> x >> y;

    if(x == 0.0 & y == 0.0){
        cout << "Origem\n";
        return 0;
    }

    if((x * y) > 0){
        if(x > 0){ cout << "Q1\n"; }
        else{ cout << "Q3\n"; }
    }else{
        if(x > 0){ cout << "Q4\n"; }
        else{ cout << "Q2\n"; }
    }

    return 0;
}